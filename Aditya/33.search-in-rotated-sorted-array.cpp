/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

/* The logic is to divide the array into two parts. One before
 * the pivot, and one after it. This way, we will be able to 
 * have a properly sorted array in both these sub-arrays.
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftPtr = 0;
        int rightPtr = nums.size()-1;
        int mid;

        while(leftPtr < rightPtr){
            mid = (leftPtr + rightPtr)/2;

            if(nums[mid] == target){
                return mid;
            } else if(nums[mid] > nums[0]) { //condition guarantees smallest element
                leftPtr = mid + 1;
            } else {
                rightPtr = mid - 1;
            }
        }


    }
};
// @lc code=end

