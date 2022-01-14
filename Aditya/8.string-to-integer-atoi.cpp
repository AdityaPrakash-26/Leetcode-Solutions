/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        int32_t i, ans, sign, backup;
        i=0;
        while(i<s.length() && s[i] == ' ')
            i++;
        sign = 1; // positive
        if(i<s.length() && s[i] == '+')
        {
            i++;
        }
        else if(i<s.length() && s[i] == '-')
        {
            sign = -1; // negative
            i++;
        }
        ans=0;
        while(i<s.length() && isdigit(s[i]))
        {
            backup = ans;
            if(sign==1 && ans > (INT_MAX-(s[i]-'0'))/10)
                return INT_MAX;
            else if(sign==-1  && ans > (INT_MAX-(s[i]-'0'))/10)
                return INT_MIN;
            
            ans = ans*10+(s[i]-'0');
            i++;
        }
        return ans*sign;
    }
};
// @lc code=end

