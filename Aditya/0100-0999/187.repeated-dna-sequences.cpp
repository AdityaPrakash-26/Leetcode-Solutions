/*
Accepted
31/31 cases passed (64 ms)
Your runtime beats 65.1 % of cpp submissions
Your memory usage beats 8.58 % of cpp submissions (23.5 MB)
*/

/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 */

// @lc code=start
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> counter;
        vector<string> res;
        
        if (s.size() < 10) {
            return res;
        }
        
        for (int i=0; i<s.size()-9; i++){
            counter[s.substr(i, 10)]++;
        }
        
        for (auto a : counter){
            if (a.second > 1){
                res.push_back(a.first);
            }
        }
        
        return res;
    }
};
// @lc code=end

