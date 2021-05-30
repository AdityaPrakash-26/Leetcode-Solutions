/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==0){
            return 0;
        }
        int count = 0;
        if(dividend>0 && divisor>0) {
            while(dividend-divisor>=0){
                dividend-=divisor;
                count++;
            }
        } else if(dividend<0 && divisor<0){
            dividend*=-1;
            divisor*=-1;
            while(dividend-divisor>=0){
                dividend-=divisor;
                count++;
            }
        } else if(dividend>0 && divisor<0) {
            divisor*=-1;
            while(dividend-divisor>=0){
                dividend-=divisor;
                count++;
            }
            count*=-1;
        } else if (dividend<0 && divisor>0){
            dividend*=-1;
            while(dividend-divisor>=0){
                dividend-=divisor;
                count++;
            }
            count*=-1;
        }
        return count;
    }
};
// @lc code=end

