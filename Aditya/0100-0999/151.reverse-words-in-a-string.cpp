/*
Accepted
57/57 cases passed (4 ms)
Your runtime beats 84.03 % of cpp submissions
Your memory usage beats 55.32 % of cpp submissions (7.6 MB)
*/

/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string curr;
        stack<string> stk;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(!curr.empty()){
                    stk.push(curr);
                    curr = "";
                }
            } else {
                curr.push_back(s[i]);
            }
        }

        if(!curr.empty()){
            stk.push(curr);
        }

        while(!stk.empty()){
            string top = stk.top();
            stk.pop();
            ans.append(top);
            ans.push_back(' ');
        }
        if(ans.size() >= 1 && ans[ans.size() - 1] == ' '){
            ans.pop_back();
        }
        return ans;
    }
};
// @lc code=end

