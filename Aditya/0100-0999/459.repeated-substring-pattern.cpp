/*
Accepted
128/128 cases passed (16 ms)
Your runtime beats 92.17 % of cpp submissions
Your memory usage beats 54.56 % of cpp submissions (13.4 MB)
*/

/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        return (s + s).substr(1, 2*s.size()-2).find(s) != -1;
    }
};
// @lc code=end

