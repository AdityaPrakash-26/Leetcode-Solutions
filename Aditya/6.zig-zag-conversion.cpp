
/*
Accepted
1157/1157 cases passed (8 ms)
Your runtime beats 86.7 % of cpp submissions
Your memory usage beats 41.32 % of cpp submissions (10.6 MB)
*/

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
        if(numRows <= 1){
            return s;
        }
        
        vector<string> vs(numRows, "");
        int n = s.length(), i = 0;
        while (i < n)
        {
            for (int j = 0; j < numRows && i < n; j++)
                vs[j].push_back(s[i++]); //going down
            for (int j = numRows - 2; j >= 1 && i < n; j--)
                vs[j].push_back(s[i++]); //going oblique
        }
        string zigzag;
        for (string v : vs)
            zigzag += v;
        return zigzag;
    }
};
// @lc code=end
