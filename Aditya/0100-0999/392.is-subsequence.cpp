/*
Accepted
17/17 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 34.95 % of cpp submissions (6.4 MB)
*/

/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIdx = 0;

        for(int i = 0; i<t.size(); i++){
            if(t[i] == s[sIdx]){
                sIdx++;
            }
        }

        return sIdx == s.size();
    }
};
// @lc code=end

