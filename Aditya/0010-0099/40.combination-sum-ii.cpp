/*
Accepted
175/175 cases passed (8 ms)
Your runtime beats 55.66 % of cpp submissions
Your memory usage beats 42.5 % of cpp submissions (10.8 MB)
*/

/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:
    vector<int> current;
    vector<vector<int>> res;
    void backtrack(vector<int>& candidates, int target, int idx, int& sum){
        if(sum > target){
            return;
        }

        if(sum == target){
            res.push_back(current);
            return;
        }

        for(int i = idx; i < candidates.size(); i++){
            if(i > idx && candidates[i] == candidates[i-1]){
                continue;
            }
            sum += candidates[i]; //and current value to sum
            current.push_back(candidates[i]); //and current value to current vector
            backtrack(candidates, target, i + 1, sum); //again operate for same index i
            sum -= candidates[i]; //backtrack, remove previously added value
            current.pop_back(); //backtrack, pop previously added number
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int sum = 0;
        backtrack(candidates, target, 0, sum);
        return res;
    }
};
// @lc code=end

