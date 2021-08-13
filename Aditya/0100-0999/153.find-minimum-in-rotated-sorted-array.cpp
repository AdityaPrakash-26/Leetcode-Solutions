/*
Accepted
150/150 cases passed (4 ms)
Your runtime beats 61.1 % of cpp submissions
Your memory usage beats 96.07 % of cpp submissions (10.1 MB)
*/

/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while(start < end){
            if(nums[start] < nums[end]){    //array is sorted
                return nums[start]; //hence the left most element is smallest
            }

            int mid = (start + end) / 2;

            if(nums[mid] >= nums[start]){
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return nums[start]; //or nums[end] as they are the same
    }
};
// @lc code=end

