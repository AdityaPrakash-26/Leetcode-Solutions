/*
Accepted
46/46 cases passed (48 ms)
Your runtime beats 14.51 % of cpp submissions
Your memory usage beats 56.49 % of cpp submissions (27.5 MB)
*/


/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
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
            } else if (nums[mid] < target){
                leftIdx = mid + 1;
            } else {
                rightIdx = mid - 1;
            }
        }
        return -1;
    }
};
// @lc code=end

