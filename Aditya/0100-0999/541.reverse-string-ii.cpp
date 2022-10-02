/*
Accepted
60/60 cases passed (4 ms)
Your runtime beats 84 % of cpp submissions
Your memory usage beats 92.70 % of cpp submissions (7.2 MB)
*/

/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        for (int left = 0; left < s.size(); left += 2 * k) {
            for (int i = left, j = min(left + k - 1, (int)s.size() - 1); i < j; i++, j--) {
                swap(s[i], s[j]);
            }
        }
        return s;
    }
};
// @lc code=end

