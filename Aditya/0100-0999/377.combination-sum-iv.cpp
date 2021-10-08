/*
Accepted
15/15 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 64.17 % of cpp submissions (6.6 MB)
*/

/*
 * @lc app=leetcode id=377 lang=cpp
 *
 * [377] Combination Sum IV
 */

// @lc code=start
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        // sorting is used to minimize the run time for iterating through the
        // nums. Once we reach number greater than the target we are looking
        // for, there's no need to search for the rest.
        sort(nums.begin(), nums.end());
        
        // use unsigned long to prevent integer overflow
        vector<unsigned long> dp(target + 1, 0);
        // base case
        dp[0] = 1;
        for (int i = 1; i <= target; ++i){
            int ways = 0;
            for (int j = 0; j < nums.size(); ++j){
                int remain = i - nums[j];
                if (remain < 0) {
                    break;
                }
                // the way it can reach the point are always start from the smaller number
                ways += dp[remain];
            }
            dp[i] = ways;
        }
        return dp[target];
    }
};
// @lc code=end

