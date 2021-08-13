/*
Accepted
21/21 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 57.95 % of cpp submissions (9 MB)
*/

/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastSeenNonZeroAtIdx = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[lastSeenNonZeroAtIdx], nums[i]);
                lastSeenNonZeroAtIdx++;
            }
        }
    }
};
// @lc code=end

