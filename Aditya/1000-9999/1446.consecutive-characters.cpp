/*
Accepted
333/333 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 99.85 % of cpp submissions (6.6 MB)
*/

/*
 * @lc app=leetcode id=1446 lang=cpp
 *
 * [1446] Consecutive Characters
 */

// @lc code=start
class Solution {
public:
    int maxPower(string s) {
        // support variables
        int res = 0, i = 0, j, len = s.size(), curr = s[0];
        while (i < len) {
            // updating j
            j = i + 1;
            // moving j to the first value of s[j] != curr
            while (j < len && curr == s[j]) j++;
            // updating res
            res = max(res, j - i);
            // setting curr and i for the next loop
            curr = s[j];
            i = j;
        }
        return res;
    }
};
// @lc code=end

