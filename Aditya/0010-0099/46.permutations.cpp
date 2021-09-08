/*
Accepted
26/26 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 92.37 % of cpp submissions (7.6 MB)
*/

/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& nums, int leftIdx, int rightIdx){
        if(leftIdx == rightIdx){
            res.push_back(nums);
        } else {
            for(int i = leftIdx; i<=rightIdx; i++){
                swap(nums[leftIdx], nums[i]);    // swap and call it again
                backtrack(res, nums, leftIdx + 1, rightIdx);
                swap(nums[leftIdx], nums[i]);    // revert the change (backtrack)
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(res, nums, 0, nums.size()-1);
        return res;
    }
};
// @lc code=end

