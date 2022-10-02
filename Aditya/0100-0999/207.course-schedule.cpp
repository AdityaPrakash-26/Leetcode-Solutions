/*
Accepted
51/51 cases passed (16 ms)
Your runtime beats 95.12 % of cpp submissions
Your memory usage beats 60.32 % of cpp submissions (13.8 MB)
*/

/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n, vector<int>());
        vector<int> degree(n, 0);
        for (int i = 0; i<pre.size(); i++) {
            vector<int> p = pre[i];
            adj[p[1]].push_back(p[0]);
            degree[p[0]]++;
        }
        
        queue<int> q;
        
        for (int i = 0; i < n; i++){
            if (degree[i] == 0) q.push(i);
        }
        
        while (!q.empty()) {
            int curr = q.front(); 
            q.pop(); 
            n--;
            
            for (auto next: adj[curr]){
                if (--degree[next] == 0) q.push(next);
            }
        }
        
        return n == 0;
    }
};
// @lc code=end

