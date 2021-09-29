/*
Accepted
89/89 cases passed (80 ms)
Your runtime beats 62.92 % of cpp submissions
Your memory usage beats 13.8 % of cpp submissions (42 MB)
*/

/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> seen = {{0, 1}};    // we have seen a sum of 0, one time in the beginning.
        int count = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            count += seen[sum - k];
            seen[sum]++;
        }
        return count;
    }
};
// @lc code=end

