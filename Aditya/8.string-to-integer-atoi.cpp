/*
Accepted
1082/1082 cases passed (4 ms)
Your runtime beats 58.56 % of cpp submissions
Your memory usage beats 22.23 % of cpp submissions (7 MB)
*/

/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] string to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s){
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
