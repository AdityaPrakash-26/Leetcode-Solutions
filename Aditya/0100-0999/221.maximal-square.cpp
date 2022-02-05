/*
Accepted
74/74 cases passed (20 ms)
Your runtime beats 94.86 % of cpp submissions
Your memory usage beats 27.34 % of cpp submissions (11.9 MB)
*/

/*
 * @lc app=leetcode id=221 lang=cpp
 *
 * [221] Maximal Square
 */

// @lc code=start
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty()) {
            return 0;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();
        int size = 0;
        vector<vector<int>> dp(rows, vector<int>(cols, 0));

        // for the first row. If matrix is 0, then dp array should be 0. If
        // matrix is 1, dp array should be set to 1.
        for(int i = 0; i < cols; i++){
            dp[0][i] = matrix[0][i] - '0';
            if(dp[0][i] == 1){
                size = 1;
            }
        }

        for(int i = 0; i < rows; i++){
            dp[i][0] = matrix[i][0] - '0';
            if(dp[i][0] == 1){
                size = 1;
            }
        }

        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] == '0') { 
                    dp[i][j] = 0;
                } else {
                    // this 1 is added because matrix[i][j] is currently 1.
                    // Hence, the minimum area of square ending at this index
                    // will be 1.
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
                size = max(dp[i][j], size);
            }
        }
        return size * size;
    }
};
// @lc code=end

