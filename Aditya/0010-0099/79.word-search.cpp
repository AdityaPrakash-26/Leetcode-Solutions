/*
Accepted
57/57 cases passed (320 ms)
Your runtime beats 61.6 % of cpp submissions
Your memory usage beats 77.76 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
private:
    int n, m;
    vector<vector<bool>> vis;
    bool dfs(vector<vector<char>> &board, string word, int i, int j, int index) {
        if(board[i][j] == word[index]) {
            vis[i][j] = true;

            if(index == word.length() - 1){
                return true;
            }
            
            if(i-1 >= 0 && vis[i-1][j] == false) {
                if(dfs(board, word, i-1, j, index+1)){
                    return true;
                }
            }

            if(i+1 < n && vis[i+1][j] == false) {
                if(dfs(board, word, i+1, j, index+1)) {
                    return true;
                }
            }

            if(j-1 >= 0 && vis[i][j-1] == false) {
                if(dfs(board, word, i, j-1, index+1)) {
                    return true;
                }
            }

            if(j+1 < m && vis[i][j+1] == false) {
                if(dfs(board, word, i, j+1, index+1)){
                    return true;
                }
            }

            vis[i][j] = false;
            return false;
        }
        return false;
    }

public:

    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        vis = vector<vector<bool>>(n, vector<bool>(m, false));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) {
                if(dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

