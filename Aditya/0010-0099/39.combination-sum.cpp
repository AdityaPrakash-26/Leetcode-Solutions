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
    int sum;

    void backtrack(vector<int>& candidates,int target,int index){
        if(sum>target)return ;//base case if sum is greater then target then return 
        
        if(sum==target){
            result.push_back(current);//id sum is equal to target then just add current to result
        }
        for(int i=index;i<candidates.size();i++){
            sum+=candidates[i];//and current value to sum
            current.push_back(candidates[i]);//and current value to current vector
            backtrack(candidates,target,i);//again reccure for same index i
            sum-=candidates[i];//back track mean remove value that previously added
            current.pop_back();//remove the value that previously added to current 
        }      
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sum=0; // This sum is global you can see it on the top of code just a clarify if you have any doubt
        backtrack(candidates,target,0);//i make result current and sum global to reduce the size of function for simplecity
        return result;//This result is also global 
    }
};
// @lc code=end

