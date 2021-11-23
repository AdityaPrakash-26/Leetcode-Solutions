/*
Accepted
53/53 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 58.4 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=1413 lang=cpp
 *
 * [1413] Minimum Value to Get Positive Step by Step Sum
 */

// @lc code=start
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minSum = INT_MAX;
        int currSum = 0;
        for(int i = 0; i < nums.size(); i++){
            currSum += nums[i];
            minSum = min(minSum, currSum);
        }

        if(minSum <= 0){
            return abs(minSum) + 1;
        } else {
            return 1;
        }
    }
};
// @lc code=end

