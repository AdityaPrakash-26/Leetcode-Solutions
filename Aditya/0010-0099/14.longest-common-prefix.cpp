/*
Accepted
123/123 cases passed (4 ms)
Your runtime beats 71.41 % of cpp submissions
Your memory usage beats 86.74 % of cpp submissions (9.1 MB)
*/

/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        string res = "";
        if (strs.size() == 0)
            return res;
        if (strs.size() == 1)
            return strs[0];
        int j = 0;
        bool flag = false;
        while (true){
            for (int i = 1; i < strs.size(); i++){
                if (strs[i - 1][j] != strs[i][j]){
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
            j++;
        }

        for (int i = 0; i < j; i++){
            res += strs[0][i];
        }
        return res;
    }
};
// @lc code=end
