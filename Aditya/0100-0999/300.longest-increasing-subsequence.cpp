/*
Accepted
54/54 cases passed (260 ms)
Your runtime beats 46.14 % of cpp submissions
Your memory usage beats 62.18 % of cpp submissions (10.5 MB)
*/

/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        vector<int> dp(size, 1);

        for(int i = size - 1; i >= 0; i--){
            for(int j = i+1; j<size; j++){
                if(nums[i] < nums[j]){
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
        }

        int maxElement = INT_MIN;
        for(int i = 0; i < size; i++){
            if(dp[i] > maxElement){
                maxElement = dp[i];
            }
        }
        return maxElement;
    }
};
// @lc code=end

