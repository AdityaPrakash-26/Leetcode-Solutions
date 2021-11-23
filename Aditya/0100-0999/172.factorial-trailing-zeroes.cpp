/*
Accepted
500/500 cases passed (0 ms)
Your runtime beats 100% of cpp submissions
Your memory usage beats 95.31% of cpp submissions (5.8 MB)
*/

/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        return n==0 ? 0 : n/5 + trailingZeroes(n/5);
    }
};
// @lc code=end

