/*
Accepted
33/33 cases passed (8 ms)
Your runtime beats 68.91 % of cpp submissions
Your memory usage beats 34.01 % of cpp submissions (10 MB)
*/

/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        backtrack(nums, res, 0, nums.size()-1);
        return res;
    }

    void backtrack(vector<int>& nums, vector<vector<int>>& res, int leftIdx, int rightIdx){
        if(leftIdx == rightIdx){
            res.push_back(nums);
            return;
        }

        unordered_set<int> st;

        for (int i = leftIdx; i <= rightIdx; i++) {
            if (st.count(nums[i]) == 1){ // element has been traversed over
                continue; 
            }
            st.insert(nums[i]);
            swap(nums[i], nums[leftIdx]);
            backtrack(nums, res, leftIdx+1, rightIdx);
            swap(nums[i], nums[leftIdx]);
        }
    }
};
// @lc code=end

