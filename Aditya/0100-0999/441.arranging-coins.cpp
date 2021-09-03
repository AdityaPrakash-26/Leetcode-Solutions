/*
Accepted
1335/1335 cases passed (4 ms)
Your runtime beats 71.39 % of cpp submissions
Your memory usage beats 25.17 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        long left = 0, right = n;
        while (left <= right) {
            long mid = left + (right - left) / 2;   //for overflow
            long curr = mid * (mid + 1) / 2; //sum of first n natural numbers

            if (curr == n) {
                return (int)mid;
            }

            if (n < curr) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return (int)right;  //for incomplete
    }
};
// @lc code=end

