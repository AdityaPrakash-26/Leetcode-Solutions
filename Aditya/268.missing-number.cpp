/*
Accepted
122/122 cases passed (16 ms)
Your runtime beats 81.88 % of cpp submissions
Your memory usage beats 93.2 % of cpp submissions (17.8 MB)
*/

/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int expectedSum = size * (size + 1) / 2;
        int actualSum = 0;

        for(int i = 0; i<size; i++){
            actualSum += nums[i];
        }

        return expectedSum - actualSum;
    }
};
// @lc code=end

