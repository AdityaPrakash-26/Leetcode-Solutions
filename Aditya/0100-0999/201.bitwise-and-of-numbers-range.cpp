/*
Accepted
8268/8268 cases passed (8 ms)
Your runtime beats 72.52 % of cpp submissions
Your memory usage beats 76.11 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 */

// @lc code=start
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        // when n>m (at least larger by 1) the LSB is either (1,0) or (0,1) for
        // (n, m) and thus LSB of AND well be zero. Then go on with the
        // sub-problem of (n>>1, m>>1)
        return (n > m) ? (rangeBitwiseAnd(m/2, n/2) << 1) : m;
    }
};
// @lc code=end

