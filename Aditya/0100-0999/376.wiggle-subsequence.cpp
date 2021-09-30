/*
Accepted
26/26 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 75.94 % of cpp submissions (7 MB)
*/

/*
 * @lc app=leetcode id=376 lang=cpp
 *
 * [376] Wiggle Subsequence
 */

// @lc code=start
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int len = nums.size();
        int i = 1;
        int ans = 1;
        while (i < len && nums[i] == nums[i-1]) {
            i++;
        }
        if (i == len) {
            return 1;
        }

        bool up = nums[i-1] > nums[i];

        for (; i < len; i++){
            if ((up && nums[i] < nums[i-1]) || (!up && nums[i] > nums[i-1])){
                up = !up, ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

