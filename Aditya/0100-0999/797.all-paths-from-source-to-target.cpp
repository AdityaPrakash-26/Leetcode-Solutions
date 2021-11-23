/*
Accepted
30/30 cases passed (12 ms)
Your runtime beats 82.89 % of cpp submissions
Your memory usage beats 85.43 % of cpp submissions (10.6 MB)
*/

/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& g, vector<vector<int>>& res, vector<int>& path, int cur) {
        path.push_back(cur);
        if (cur == g.size() - 1){
            res.push_back(path);
        }
        else for (auto it: g[cur])  // for every element in current level
            dfs(g, res, path, it);
        path.pop_back();    // backtrack
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        vector<vector<int>> paths;
        vector<int> path;
        dfs(g, paths, path, 0);
        return paths;
    }
};
// @lc code=end

