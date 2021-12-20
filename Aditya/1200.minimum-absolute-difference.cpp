/*
Accepted
36/36 cases passed (64 ms)
Your runtime beats 81.88 % of cpp submissions
Your memory usage beats 32.84 % of cpp submissions (32.3 MB)
*/


/*
 * @lc app=leetcode id=1200 lang=cpp
 *
 * [1200] Minimum Absolute Difference
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>> ans;
        int minDiff = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            int diff = abs(nums[i] - nums[i-1]);
            if(diff < minDiff){
                minDiff = diff;
                ans.clear();
                ans.push_back({nums[i-1], nums[i]});
            } else if (diff == minDiff){
                ans.push_back({nums[i-1], nums[i]});
            } else {
                continue;
            }
        }
        return ans;
    }
};
// @lc code=end

