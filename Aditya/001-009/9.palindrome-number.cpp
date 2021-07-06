/*
Accepted
11510/11510 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 23.8 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }

        int rev = 0;
        while (x > rev)
        {
            rev *= 10;
            rev += x % 10;
            x /= 10;
        }

        return x == rev || x == rev / 10;
    }
};
// @lc code=end
