/*
Accepted
20/20 cases passed (8 ms)
Your runtime beats 31.82 % of cpp submissions
Your memory usage beats 87.07 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > subs;
        vector<int> sub;
        backtrack(nums, 0, sub, subs);
        return subs;
    }

    void backtrack(vector<int>& nums, int startingIdx, vector<int>& currentSet, vector<vector<int>>& subs){
        if(find(subs.begin(), subs.end(), currentSet) == subs.end()){
            subs.push_back(currentSet);
        }
        for(int i = startingIdx; i < nums.size(); i++){
            if(i == startingIdx || nums[i] != nums[i-1]){
                currentSet.push_back(nums[i]);
                backtrack(nums, i+1, currentSet, subs);
                currentSet.pop_back();  //backtrack
            }
        }
    }
};
// @lc code=end

