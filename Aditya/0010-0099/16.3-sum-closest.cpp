/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minDiff = INT_MAX;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i=0;i<size-2;i++){
            int j = i+1;
            int k = size-1;

            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(target-sum) < minDiff){
                    minDiff = abs(target-sum);
                    ans = sum;
                }
                if(sum > target){
                    k--;
                } else {
                    j++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

