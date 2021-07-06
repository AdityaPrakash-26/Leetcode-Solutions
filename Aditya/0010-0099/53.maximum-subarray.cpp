/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int max_sum_here = nums[0];

        int n = nums.size();

        for(int i = 1; i<n; i++){
            max_sum_here = max(nums[i], max_sum_here + nums[i]);    //this works for all negative array. If -1 would have been added to -2, then this line would ensure -1 is picked.
            max_sum = max(max_sum_here, max_sum);
        }

        return max_sum;
    }
};
// @lc code=end

