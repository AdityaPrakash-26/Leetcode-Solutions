/*
Accepted
1032/1032 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 71.94 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        if (x == -2147483648)
            return 0;
        bool is_negative = x < 0;
        if (is_negative)
            x *= -1;
        int reverse = 0;

        while (x > 0)
        {
            int digit = x % 10;
            x = x / 10;
            if (reverse > numeric_limits<int>::max() / 10)
                return 0; //The result would overflow
            reverse = 10 * reverse;
            reverse += digit;
        }

        if (is_negative)
            reverse = -reverse;
        return reverse;
    }
};
// @lc code=end
