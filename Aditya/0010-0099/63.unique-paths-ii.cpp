/*
Accepted
41/41 cases passed (4 ms)
Your runtime beats 65.53 % of cpp submissions
Your memory usage beats 63.77 % of cpp submissions (7.6 MB)
*/

/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();
        // invalid starting and ending points
        if(obstacleGrid[0][0] == 1 || obstacleGrid[rows - 1][cols - 1] == 1){
            return 0;
        }

        obstacleGrid[0][0] = 1;

        // iterate the first row
        for(int i = 1; i < cols; i++){
            obstacleGrid[0][i] = (obstacleGrid[0][i] == 0 && obstacleGrid[0][i - 1] == 1) ? 1 : 0;
        }

        // iterate the first col
        for(int i = 1; i < rows; i++){
            obstacleGrid[i][0] = (obstacleGrid[i][0] == 0 && obstacleGrid[i - 1][0] == 1) ? 1 : 0;
        }

        for(int i = 1; i < rows; i++){
            for(int j = 1; j < cols; j++){
                if(obstacleGrid[i][j] != 1){
                    obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
                } else {
                    obstacleGrid[i][j] = 0;
                }
            }
        }

        return obstacleGrid[rows - 1][cols - 1];

    }
};
// @lc code=end

