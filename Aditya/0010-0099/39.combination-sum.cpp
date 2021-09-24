/*
Accepted
170/170 cases passed (8 ms)
Your runtime beats 71.32 % of cpp submissions
Your memory usage beats 62.82 % of cpp submissions (11 MB)
*/

/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>result;
    vector<int>current;

    void backtrack(vector<int>& candidates, int target, int index, int& sum){
        //base case if sum is greater then target then return 
        if(sum > target){
            return;
        }
        
        if(sum == target){
            result.push_back(current); //id sum is equal to target then just add current to result
        }

        for(int i = index; i < candidates.size(); i++){
            sum += candidates[i]; //and current value to sum
            current.push_back(candidates[i]); //and current value to current vector
            backtrack(candidates, target, i, sum); //again operate for same index i
            sum -= candidates[i]; //backtrack, remove previously added value
            current.pop_back(); //backtrack, pop previously added number
        }      
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;    // sum of the numbers currently being considered
        backtrack(candidates, target, 0, sum);
        return result; // This result is global 
    }
};
// @lc code=end

