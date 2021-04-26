/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<string> vs(numRows, "");
        int n = s.length(), i = 0;
        while (i < n)
        {
            for (int j = 0; j < numRows && i < n; j++)
                vs[j].push_back(s[i++]);
            for (int j = numRows - 2; j >= 1 && i < n; j--)
                vs[j].push_back(s[i++]);
        }
        string zigzag;
        for (string v : vs)
            zigzag += v;
        return zigzag;
    }
};
// @lc code=end
