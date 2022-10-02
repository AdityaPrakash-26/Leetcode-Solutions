/*
Accepted
14/14 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 69.78 % of cpp submissions (6.5 MB)
*/

/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for(int i = 0; i < numRows; i++){
            r[i].resize(i+1);

            r[i][0] = 1;
            r[i][i] = 1;

            for(int j = 1; j < i; j++){
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        return r;
    }
};
// @lc code=end

