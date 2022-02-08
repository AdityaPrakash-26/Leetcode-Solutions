class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxSubSum = nums[0];
    int currMaxSum = 0;
    for(auto it : nums){
        currMaxSum += it;
        maxSubSum = max(maxSubSum, currMaxSum);
        if(currMaxSum < 0){
            currMaxSum = 0;
        }
    }
    return maxSubSum;
    }
};