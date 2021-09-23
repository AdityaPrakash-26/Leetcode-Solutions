/*
Accepted
106/106 cases passed (12 ms)
Your runtime beats 90.04 % of cpp submissions
Your memory usage beats 72.28 % of cpp submissions (16.4 MB)
*/

/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int maxReachable = 0;
        int lastJumpedPos = 0;
        int jumps = 0;
        while(lastJumpedPos < n - 1) {  // loop till last jump hasn't taken us till the end
            maxReachable = max(maxReachable, i + nums[i]);  // furthest index reachable on the next level from current level
            if(i == lastJumpedPos) {			  // current level has been iterated & maxReachable position on next level has been finalised
                lastJumpedPos = maxReachable;     // so just move to that maxReachable position
                jumps++;                          // and increment the level
        // NOTE: jump^ only gets updated after we iterate all possible jumps from previous level
        //       This ensures jumps will only store minimum jump required to reach lastJumpedPos
            }            
            i++;
        }
        return jumps;
    }
};
// @lc code=end

