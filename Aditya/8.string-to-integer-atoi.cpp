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
        long result = 0;
        int indicator = 1;
        for(int i = 0; i<s.size();){
            i = s.find_first_not_of(' ');
            if(s[i] == '-' || s[i] == '+')
                indicator = (s[i++] == '-')? -1 : 1;
            while('0'<= s[i] && s[i] <= '9') 
            {
                result = result*10 + (s[i++]-'0');
                if(result*indicator >= INT_MAX) return INT_MAX;
                if(result*indicator <= INT_MIN) return INT_MIN;                
            }
            return result*indicator;
        }
    }
};
// @lc code=end
