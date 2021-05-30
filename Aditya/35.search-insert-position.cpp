/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int n = nums.size();
        for(i; i<n; i++){
            if(nums[i]==target){
                return i;
            } else if(nums[i]>target) {
                return i;
            }
        }
        
        return n;
        
    }
};
// @lc code=end

