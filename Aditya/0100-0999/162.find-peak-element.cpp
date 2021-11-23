/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return search(nums, 0, nums.size() - 1);
    }

    int search(vector<int>& nums, int leftIdx, int rightIdx) {
        if (leftIdx == rightIdx){
            return leftIdx;
        }

        int mid = (leftIdx + rightIdx) / 2;
        
        if (nums[mid] > nums[mid + 1]){
            return search(nums, leftIdx, mid);  //pushes rightIdx leftwards
        }

        return search(nums, mid + 1, rightIdx); //pushes leftIdx rightwards
    }
};
// @lc code=end

