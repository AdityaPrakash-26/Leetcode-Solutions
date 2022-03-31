/*
 * @lc app=leetcode id=410 lang=cpp
 *
 * [410] Split Array Largest Sum
 */

// @lc code=start
class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        
        vector<unsigned int> prefix_sum(n, 0);
        vector<vector<unsigned int> > dp(n + 1, vector<unsigned int>(m + 1, INT_MAX));
        prefix_sum[0] = nums[0];
        // Step 1:
        for(int i = 1; i < n; i++){
            prefix_sum[i] = prefix_sum[i - 1] + nums[i];
        }
        
        // Step 2, 3:
        for(int i = 0; i < n; i++){
            dp[i][1] = prefix_sum[i];
        }
        
        dp[0][0] = 0;
        // Step 4
        for(int i = 0; i < n; i++){
            // check all the possible splitting mechanism
            for(int j = 2; j <= m; j++){
                // from 0 to i, 
                for(int k = 0; k < i; k++){
                    dp[i][j] = min(dp[i][j], max(dp[k][j - 1], prefix_sum[i] - prefix_sum[k]));
                }
            }
        }
        
        return dp[n - 1][m];
    }
};
// @lc code=end

