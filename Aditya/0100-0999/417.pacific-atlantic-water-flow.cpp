/*
Accepted
113/113 cases passed (39 ms)
Your runtime beats 78.89 % of cpp submissions
Your memory usage beats 98.35 % of cpp submissions (16.9 MB)
*/

/*
 * @lc app=leetcode id=417 lang=cpp
 *
 * [417] Pacific Atlantic Water Flow
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;

        if (heights.empty()) {
            return ans;
        }

        int rows = heights.size();
        int cols = heights[0].size();
        vector<char> dp(rows * cols);

        for (int i = 0; i < rows; i++) {
            dfs(heights, dp, i, 0, 1, 0);
            dfs(heights, dp, i, cols - 1, 2, 0);
        }
        for (int i = 0; i < cols; i++) {
            dfs(heights, dp, 0, i, 1, 0);
            dfs(heights, dp, rows - 1, i, 2, 0);
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (dp[i * cols + j] == 3) {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }

private:
    void dfs(const vector<vector<int>>& heights, vector<char>& dp, int i, int j, int w, int h) {
        int rows = heights.size(), cols = heights[0].size(), ij = i * cols + j, newh = heights[i][j];;
        if ((dp[ij] & w) || heights[i][j] < h) return;
        dp[ij] += w;
        if (i + 1 < rows) dfs(heights, dp, i + 1, j, w, newh);
        if (i > 0) dfs(heights, dp, i - 1, j, w, newh);
        if (j + 1 < cols) dfs(heights, dp, i, j + 1, w, newh);
        if (j > 0) dfs(heights, dp, i, j - 1, w, newh);
    }
};
// @lc code=end

