/*
Accepted
14/14 cases passed (8 ms)
Your runtime beats 77.96 % of cpp submissions
Your memory usage beats 81.48 % of cpp submissions (11 MB)
*/

/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while(left < right){
            int mid = (left + right)/2;

            if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1])){
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return nums[left];
    }
};
// @lc code=end

