/*
Accepted
728/728 cases passed (12 ms)
Your runtime beats 96.3 % of cpp submissions
Your memory usage beats 71.11 % of cpp submissions (23.2 MB)
*/

/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
public:
    int getAreaOfIsland(vector<vector<int>>& grid, int rowPos, int colPos){
        if(rowPos >= 0 && rowPos < grid.size() && colPos >= 0 && colPos < grid[0].size() && grid[rowPos][colPos] == 1){
            grid[rowPos][colPos] = 0;   // we change it to zero to avoid duplicates.
            return 1 + getAreaOfIsland(grid, rowPos + 1, colPos) + getAreaOfIsland(grid, rowPos - 1, colPos) + getAreaOfIsland(grid, rowPos, colPos + 1) + getAreaOfIsland(grid, rowPos, colPos - 1);
        }
        return 0;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){    //if land is found, expand in all 4 directions
                    maxArea = max(maxArea, getAreaOfIsland(grid, i, j));
                }
            }
        }
        return maxArea;
    }
};
// @lc code=end

