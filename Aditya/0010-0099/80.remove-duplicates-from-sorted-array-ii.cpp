/*
Accepted
164/164 cases passed (4 ms)
Your runtime beats 85.3 % of cpp submissions
Your memory usage beats 74.56 % of cpp submissions (10.8 MB)
*/

/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums){
            if (i < 2 || n > nums[i-2]){
                nums[i++] = n;
            }
        }
        return i;
    }
};
// @lc code=end

