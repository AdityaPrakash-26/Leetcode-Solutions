/*
 * @lc app=leetcode id=403 lang=cpp
 *
 * [403] Frog Jump
 */

// @lc code=start
class Solution {
public:
    bool canCross(vector<int>& stones) {
        int startingDistance = stones[1] - stones[0];
        int jumpedDistance;
        
        if(startingDistance > 1){
            return false;
        } else {
            jumpedDistance = startingDistance;
        }
        
        for(int i = 1; i<stones.size() - 1; i++){
            int toJumpDistance = stones[i+1] - stones[i];
            
            if(jumpedDistance == toJumpDistance || jumpedDistance + 1 == toJumpDistance || jumpedDistance - 1 == toJumpDistance){
                jumpedDistance = toJumpDistance;
            } else {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

