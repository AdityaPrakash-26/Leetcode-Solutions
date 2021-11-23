/*
Accepted
305/305 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 80.43 % of cpp submissions (5.8 MB)
*/

/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
        }
        return res;
    }
};
// @lc code=end

