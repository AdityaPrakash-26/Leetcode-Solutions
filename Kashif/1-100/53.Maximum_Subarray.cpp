/*
*  You are here! Your runtime beats 30.02 % of cpp submissions.
*You are here! Your memory usage beats 26.46 % of cpp submissions.
*/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currMax = nums[0], maxSum = nums[0];
        for(int i=1; i<nums.size(); i++){
            currMax = max(nums[i], currMax+nums[i]);
            maxSum = max(maxSum, currMax);
        } 
        return maxSum;
    }
};
