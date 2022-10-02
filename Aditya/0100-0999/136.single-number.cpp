/*
Accepted
61/61 cases passed (16 ms)
Your runtime beats 84.64 % of cpp submissions
Your memory usage beats 99.00 % of cpp submissions (16.8 MB)
*/

/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i<nums.size(); i++){
            res ^= nums[i];
        }
        return res;
    }
};
// @lc code=end

