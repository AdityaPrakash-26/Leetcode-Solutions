/*
Accepted
25/25 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 6.75 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        double s=pow(2,a) * pow(2,b);
        return log(s)/log(2);
    }
};
// @lc code=end

