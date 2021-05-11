#define IS_NUM(ch) ((ch >= '0') && (ch <= '9'))
#define ALLOWED(ch) (((ch >= '0') && (ch <= '9')) || (ch == '+') || (ch == '-'))

/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s){
        int n = s.size();
        int left = 0, right = n - 1;
        int sign = 1;
        double temp_res = 0, multiplier = 1;

        // Move past all white spaces - if any 
        while(left < n && s[left] == ' '){
left++;
        }

        // Check for any violation while traversing from left to right
        if((left == n) || (ALLOWED(s[left]) == false))
            return 0;
    }
};
// @lc code=end
