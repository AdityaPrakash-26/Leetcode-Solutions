/*
Accepted
49/49 cases passed (36 ms)
Your runtime beats 56.32 % of cpp submissions
Your memory usage beats 58.7 % of cpp submissions (12.3 MB)
*/

/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    void DFS(vector<vector<char>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()){
            return;
        }

        if(grid[i][j] == '0' || grid[i][j] == '2'){
            return;
        }

        grid[i][j] = '2';   //mark as visited

        DFS(grid, i-1, j);
        DFS(grid, i+1, j);
        DFS(grid, i, j-1);
        DFS(grid, i, j+1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;

        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    DFS(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
};
// @lc code=end

