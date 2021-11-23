/*
Accepted
61/61 cases passed (8 ms)
Your runtime beats 84.31 % of cpp submissions
Your memory usage beats 87.1 % of cpp submissions (9.7 MB)
*/

/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // fill out the first row
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i = 1; i < cols; i++){
            grid[0][i] += grid[0][i-1];
        }

        for(int i = 1; i < rows; i++){
            grid[i][0] += grid[i-1][0];
        }

        for(int i = 1; i < rows; i++){
            for(int j = 1; j < cols; j++){
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[rows-1][cols-1];
    }
};
// @lc code=end

