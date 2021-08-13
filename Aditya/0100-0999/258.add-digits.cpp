/*
Accepted
1101/1101 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 72.67 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int lastDigit = num%10;
            num/=10;
            num+=lastDigit;
        }
        return num;
    }
};
// @lc code=end

