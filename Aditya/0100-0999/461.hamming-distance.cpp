/*
Accepted
149/149 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 74.09 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0, n = x ^ y;
        while (n) {
            ++dist;
            n &= n - 1;
        }
        return dist;
    }
};
// @lc code=end

