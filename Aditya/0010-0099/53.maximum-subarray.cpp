/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }

        int maxOverall = nums[0];
        int maxTillNow = nums[0];

        for(int i = 1; i<nums.size(); i++){
            maxTillNow = max(nums[i], nums[i] + maxTillNow);
            maxOverall = max(maxOverall, maxTillNow);
        }
        return maxOverall;
    }
};
// @lc code=end

