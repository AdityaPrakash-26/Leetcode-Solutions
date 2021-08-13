/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res = nums;
        int resIdxPointer = nums.size() - 1;
        
        int leftIdx = 0;
        int rightIdx = nums.size() - 1;
        
        while(leftIdx <= rightIdx){
            if(abs(nums[leftIdx]) > abs(nums[rightIdx])){
                res[resIdxPointer] = nums[leftIdx] * nums[leftIdx];
                resIdxPointer--;
                leftIdx++;
            } else {
                res[resIdxPointer] = nums[rightIdx] * nums[rightIdx];
                resIdxPointer--;
                rightIdx--;
            }
        }
        return res;
    }
};
// @lc code=end

