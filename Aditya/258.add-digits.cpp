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

