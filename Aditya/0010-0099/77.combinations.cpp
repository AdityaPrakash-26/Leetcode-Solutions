/*
Accepted
27/27 cases passed (16 ms)
Your runtime beats 90.75 % of cpp submissions
Your memory usage beats 68.29 % of cpp submissions (9.1 MB)
*/

/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:
    void backtrack(int n, int k, vector<vector<int>>& ans, vector<int>& curr, int num){
        curr.push_back(num);
        if(curr.size() == k){ // condition reached
            ans.push_back(curr);
            curr.pop_back();
            return;
        }

        for(int i = num+1; i<=n; i++){
            backtrack(n, k, ans, curr, i);
        }
        curr.pop_back();
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;

        for(int i = 1; i<=n; i++){
            backtrack(n, k, ans, curr, i);
        }
        return ans;
    }
};
// @lc code=end

