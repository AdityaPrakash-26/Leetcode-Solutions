/*
Accepted
87/87 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 90.91 % of cpp submissions (8.2 MB)
*/

/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int leftIdx = 0;
        int midIdx = 0;
        int rightIdx = nums.size() - 1;

        while(midIdx <= rightIdx){
            if(nums[midIdx] == 0){
                swap(nums[leftIdx], nums[midIdx]);
                leftIdx++;
                midIdx++;
            } else if (nums[midIdx] == 1){
                midIdx++;
            } else if (nums[midIdx] == 2){
                swap(nums[midIdx], nums[rightIdx]);
                rightIdx--;
            }
        }
    }
};
// @lc code=end

