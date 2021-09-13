/*
Accepted
166/166 cases passed (104 ms)
Your runtime beats 27.16 % of cpp submissions
Your memory usage beats 78.68 % of cpp submissions (48.3 MB)
*/

/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        for (int reach = 0; i < nums.size() && i <= reach; ++i){
            reach = max(i + nums[i], reach);
        }    
        return i == nums.size();
    }
};
// @lc code=end

