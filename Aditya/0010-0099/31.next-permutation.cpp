/*
Accepted
265/265 cases passed (4 ms)
Your runtime beats 79.3 % of cpp submissions
Your memory usage beats 71.84 % of cpp submissions (12.1 MB)
*/

/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // initialize variable:
        int breakPoint = -1;

        // find a breakpoint:
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                breakPoint = i - 1;
                break;
            }
        }

        // if no breakpoint
        if (breakPoint < 0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // if found a breakpoint
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > nums[breakPoint])
            {
                swap(nums[breakPoint], nums[i]);
                reverse(nums.begin() + breakPoint + 1, nums.end());
                break;
            }
        }
    }
};
// @lc code=end

