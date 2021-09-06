/*
Accepted
42/42 cases passed (32 ms)
Your runtime beats 80.73 % of cpp submissions
Your memory usage beats 69.54 % of cpp submissions (36.1 MB)
*/

/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentStreak = 0;
        int maxAns = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                currentStreak++;
            } else {
                maxAns = max(maxAns, currentStreak);
                currentStreak = 0;
            }
        }

        maxAns = max(maxAns, currentStreak);

        return maxAns;
    }
};
// @lc code=end

