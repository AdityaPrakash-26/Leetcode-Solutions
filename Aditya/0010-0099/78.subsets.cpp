/*
Accepted
10/10 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 94.9 % of cpp submissions (7 MB)
*/

/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > subs;
        vector<int> sub;
        backtrack(nums, 0, sub, subs);
        return subs;
    }

    void backtrack(vector<int>& nums, int startingIdx, vector<int>& currentSet, vector<vector<int>>& subs){
        subs.push_back(currentSet);
        for(int i = startingIdx; i < nums.size(); i++){
            currentSet.push_back(nums[i]);
            backtrack(nums, i+1, currentSet, subs);
            currentSet.pop_back();  //backtrack
        }
    }
};
// @lc code=end

