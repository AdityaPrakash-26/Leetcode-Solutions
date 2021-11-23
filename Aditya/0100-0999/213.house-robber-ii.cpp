/*
Accepted
75/75 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 37.49 % of cpp submissions (7.9 MB)
*/

/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int robOriginal(vector<int>& nums){
        int oneStepBack = 0; 
        int twoStepBack = 0;
        int MaxRob = 0;
        for(int i=0 ; i < nums.size() ; i++){
            MaxRob = max(twoStepBack + nums[i], oneStepBack);
            twoStepBack = oneStepBack;
            oneStepBack = MaxRob;
        }
        return MaxRob;
    }

    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 1){
            return nums[0];
        }
        if(size == 2){
            return max(nums[0], nums[1]);
        }

        vector<int> numsWithFirst(nums.begin(), nums.end()-1);
        vector<int> numsWithLast(nums.begin() + 1, nums.end());

        return max(robOriginal(numsWithFirst), robOriginal(numsWithLast));

    }
};
// @lc code=end

