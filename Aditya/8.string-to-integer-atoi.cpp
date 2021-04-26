/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0;
        if (s.length() == 0)
            return 0;

        while (i < s.length() && s[i] == ' ')
            i++;
        int num = 0;
        while (i < s.length())
        {
            switch (s.at(i))
            {
            case '0':
                num += 0;
                num *= 10;
                i++;
            case '1':
                num += 1;
                num *= 10;
                i++;
            case '2':
                num += 2;
                num *= 10;
                i++;
            case '3':
                num += 3;
                num *= 10;
                i++;
            case '4':
                num += 4;
                num *= 10;
                i++;
            case '5':
                num += 5;
                num *= 10;
                i++;
            case '6':
                num += 6;
                num *= 10;
                i++;
            case '7':
                num += 7;
                num *= 10;
                i++;
            case '8':
                num += 8;
                num *= 10;
                i++;
            case '9':
                num += 9;
                num *= 10;
                i++;
            }
        }
        return num;
    }
};
// @lc code=end
