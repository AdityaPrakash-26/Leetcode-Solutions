/*
Accepted
70/70 cases passed (4 ms)
Your runtime beats 57.14 % of cpp submissions
Your memory usage beats 34.45 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=1015 lang=cpp
 *
 * [1015] Smallest Integer Divisible by K
 */

// @lc code=start
class Solution {
public:
    int smallestRepunitDivByK(int K) {
        int remainder = 0;
        for (int length_N = 1; length_N <= K; length_N++) {
            remainder = (remainder * 10 + 1) % K;
            if (remainder == 0) {
                return length_N;
            }
        }
        return -1;
    }
};
// @lc code=end

