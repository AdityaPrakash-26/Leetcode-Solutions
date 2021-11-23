/*
Accepted
48/48 cases passed (8 ms)
Your runtime beats 96.7 % of cpp submissions
Your memory usage beats 39.28 % of cpp submissions (9.8 MB)
*/

/*
 * @lc app=leetcode id=931 lang=cpp
 *
 * [931] Minimum Falling Path Sum
 */

// @lc code=start
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
		// Creating a dp matrix. 
        vector<vector<int>> dp(n, vector<int>(n, 0));
        
		// Populate the DP matrix for the first row.
        for(int i=0;i<dp.size();i++){
            dp[0][i] = matrix[0][i];
        }
        
		// Loop for the rest of the DP matrix.
        for(int i=1; i<n;i++){
            for(int j=0;j<n;j++){
				// INT_MAX is chosen because then that variable won't be taken into consideration at the time of **main step.**
                int prevCol = (j>=1) ? dp[i-1][j-1] + matrix[i][j]: INT_MAX;
                int nextCol = (j<n-1) ? dp[i-1][j+1] + matrix[i][j]: INT_MAX;
                int sameCol = dp[i-1][j] + matrix[i][j];
                dp[i][j] = min(prevCol, min(nextCol, sameCol));    // MAIN STEP
            }
        }
        
		// Calucating the minimum value for the last row becuase that is what we want.
        int ans = INT_MAX;
        for(int j=0;j<n;j++){
            ans = min(ans, dp[n-1][j]);
        }
        
        return ans;
    }
};
// @lc code=end

