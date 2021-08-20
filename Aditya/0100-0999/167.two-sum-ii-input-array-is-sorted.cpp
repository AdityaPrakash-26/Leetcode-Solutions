/*
Accepted
19/19 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 44.1 % of cpp submissions (9.6 MB)
*/

/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int leftIdx = 0;
        int rightIdx = nums.size() - 1;

        while(leftIdx < rightIdx){
            int sum = nums[leftIdx] + nums[rightIdx];
            if(sum == target){
                return {leftIdx + 1, rightIdx + 1};
            } else if (sum < target){
                leftIdx++;
            } else {
                rightIdx--;
            }
        }
        return {};
    }
};
// @lc code=end

