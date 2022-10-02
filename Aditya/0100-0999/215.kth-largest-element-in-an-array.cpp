/*
Accepted
32/32 cases passed (8 ms)
Your runtime beats 78.51 % of cpp submissions
Your memory usage beats 58.24 % of cpp submissions (10.1 MB)
*/

/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n-k];
    }
};
// @lc code=end

