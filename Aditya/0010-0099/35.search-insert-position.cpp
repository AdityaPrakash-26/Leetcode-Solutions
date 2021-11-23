/*
Accepted
62/62 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 54.11 % of cpp submissions (9.7 MB)
*/
/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                return mid;
            } else if (nums[mid] < target){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
// @lc code=end

