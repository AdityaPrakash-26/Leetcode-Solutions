/*
Accepted
15/15 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 16.78 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=413 lang=cpp
 *
 * [413] Arithmetic Slices
 */

// @lc code=start
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;
        vector<int> dp(n, 0); // dp[i] means the number of arithmetic slices ending with nums[i]
        if (nums[2]-nums[1] == nums[1]-nums[0]) dp[2] = 1; // if the first three numbers are arithmetic or not
        int result = dp[2];
        for (int i = 3; i < n; ++i) {
            // if nums[i-2], nums[i-1], nums[i] are arithmetic, then the number of arithmetic slices ending with nums[i] (dp[i])
            // equals to:
            //      the number of arithmetic slices ending with nums[i-1] (dp[i-1], all these arithmetic slices appending nums[i] are also arithmetic)
            //      +
            //      nums[i-2], nums[i-1], nums[i] (nums brand new arithmetic slice)
            // it is how dp[i] = dp[i-1] + 1 comes
            if (nums[i]-nums[i-1] == nums[i-1]-nums[i-2]) 
                dp[i] = dp[i-1] + 1;
            result += dp[i]; // accumulate all valid slices
        }
        return result;
    }
};
// @lc code=end

