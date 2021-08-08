/*
Accepted
195/195 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 28.47 % of cpp submissions (11.2 MB)
*/

/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftIdx = 0;
        int rightIdx = nums.size() - 1;

        while(leftIdx <= rightIdx){
            int mid = (leftIdx + rightIdx)/2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[mid]>=nums[leftIdx]){ //left half is sorted
                if(target>= nums[leftIdx] && target < nums[mid]){
                    rightIdx = mid;
                } else {
                    leftIdx = mid+1;
                }
            } else { //right half is sorted
                if(target>nums[mid] && target <= nums[rightIdx]){
                    leftIdx = mid+1;
                } else {
                    rightIdx = mid;
                }
            }
        }
        return -1;
    }
};
// @lc code=end

