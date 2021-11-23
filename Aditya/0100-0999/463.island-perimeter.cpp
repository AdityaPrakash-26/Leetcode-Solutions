/*
Accepted
5833/5833 cases passed (84 ms)
Your runtime beats 87.67 % of cpp submissions
Your memory usage beats 84.62 % of cpp submissions (96.1 MB)
*/

/*
 * @lc app=leetcode id=463 lang=cpp
 *
 * [463] Island Perimeter
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size(); //row
        int n = grid[0].size(); //column
        int ans = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 1){ 
                    ans+=4; 
                    if(i+1 < m && grid[i+1][j] == 1){  // if down neighbour is there
                        ans--;
                    }
                    if(i-1 >=0 && grid[i-1][j] == 1) { // if upward neighbour is there 
                        ans--;
                    }
                    if(j-1 >= 0 && grid[i][j-1] == 1) { // if left neighbour is there
                        ans--;
                    }
                    if(j+1 < n && grid[i][j+1] == 1) { // if right neighbour is there
                        ans--;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

