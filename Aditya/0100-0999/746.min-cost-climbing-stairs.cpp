/*
Accepted
283/283 cases passed (4 ms)
Your runtime beats 91.04 % of cpp submissions
Your memory usage beats 44.95 % of cpp submissions (13.8 MB)
*/

/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        vector<int> dp(size, 0);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i = 2; i<size; i++){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }

        return min(dp[size-1], dp[size-2]);
    }
};
// @lc code=end

