/*
Accepted
14/14 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 33.97 % of cpp submissions (6.5 MB)
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
        vector<vector<int>> ret;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);  // ith row(0-indexed) has i+1 elements
            for (int j = 1; j < i; j++) {
                row[j] = ret[i - 1][j] + ret[i - 1][j - 1]; // 1st and last elements will be 1, rest will be sum of two elements from above row
            }
            ret.push_back(row);
        }
        return ret;
    }
};
// @lc code=end

