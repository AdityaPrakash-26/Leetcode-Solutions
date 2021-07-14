/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingIndex = -1;
        int endingIndex = -1;

        bool hasStartingIndex = false;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < target){
                continue;
            } else if(nums[i]==target){
                if(startingIndex == -1){
                    hasStartingIndex = true;
                    startingIndex = i;
                }
            } else {
                if(endingIndex == -1 && hasStartingIndex){
                    endingIndex = i-1;
                }
            }
        }

        if(hasStartingIndex && endingIndex == -1){
            endingIndex = nums.size()-1;
        }

        vector<int> ans;
        ans.push_back(startingIndex);
        ans.push_back(endingIndex);
        return ans;
    }
};
// @lc code=end

