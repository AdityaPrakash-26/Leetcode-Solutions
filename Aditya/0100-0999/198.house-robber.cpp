/*
Accepted
68/68 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 40.5 % of cpp submissions (7.8 MB)
*/

/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        if(nums.size() == 2) {
            return max(nums[0], nums[1]);
        }

        vector<int> auxArray;
        auxArray.push_back(nums[0]);
        auxArray.push_back(max(nums[0], nums[1]));

        for(int i = 2; i<nums.size(); i++){
            auxArray.push_back(max(auxArray[i-1], auxArray[i-2] + nums[i]));
        }

        return auxArray.back();
    }
};
// @lc code=end

