/*
Accepted
16/16 cases passed (12 ms)
Your runtime beats 65.18 % of cpp submissions
Your memory usage beats 29.02 % of cpp submissions (12.9 MB)
*/

/*
 * @lc app=leetcode id=1286 lang=cpp
 *
 * [1286] Iterator for Combination
 */

// @lc code=start
class CombinationIterator {
public:
    vector<string> temp;
    int i;
    CombinationIterator(string characters, int combinationlength) {
        i=0;
        backtrack(characters,combinationlength,0,"");
    }
    
    void backtrack(string characters,int combinationlength,int idx,string ans){
        if(ans.size()==combinationlength){
            temp.push_back(ans);
            return;
        }

        for(int i=idx;i<characters.size();i++){
            ans.push_back(characters[i]);
            backtrack(characters,combinationlength,i+1,ans);
            ans.pop_back();
        }
    }
    
    string next() {
        return temp[i++];
    }
    
    bool hasNext() {
        return i<temp.size();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

