/*
Accepted
20/20 cases passed (16 ms)
Your runtime beats 96.32 % of cpp submissions
Your memory usage beats 26.17 % of cpp submissions (25 MB)
*/

/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        res.push_back(1);

        for(int i = 0; i<nums.size()-1; i++){
            res.push_back(res[i]*nums[i]);
        }

        int runningProduct = nums[nums.size() - 1];
        for(int i = nums.size() - 2; i>=0; i--){
            res[i] *= runningProduct;
            runningProduct *= nums[i];
        }

        return res;

    }
};
// @lc code=end

