/*
Accepted
53/53 cases passed (4 ms)
Your runtime beats 57.91 % of cpp submissions
Your memory usage beats 73.96 % of cpp submissions (8.5 MB)
*/

/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int currSum = 0;
        
        for(int i = 0; i<nums.size(); i++){
            currSum += nums[i];
            ans.push_back(currSum);
        }
        
        return ans;
    }
};
// @lc code=end

