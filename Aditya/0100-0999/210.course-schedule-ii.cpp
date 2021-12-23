/*
Accepted
44/44 cases passed (12 ms)
Your runtime beats 99.17 % of cpp submissions
Your memory usage beats 95.43 % of cpp submissions (13.1 MB)
*/

/*
 * @lc app=leetcode id=210 lang=cpp
 *
 * [210] Course Schedule II
 */

// @lc code=start
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        queue<int>q;
        vector<int>indegree(numCourses,0);
        //store 
        for(int i =0; i< prerequisites.size(); i++ ){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        //indegree u -> v
        for(int i =0; i < prerequisites.size(); i++){
            indegree[prerequisites[i][0]]++;
            
        }
        //push into q,indegree having 0
        for(int i =0; i< indegree.size(); i++){
            if(indegree[i] == 0)q.push(i);
        }
        vector<int>result;
        //Simple BFS and keep storing indegree values equal to 0 into result vector
        while(!q.empty()){
            int v = q.front();
            q.pop();
            for(auto it : adj[v]){
                indegree[it]--;
                if(indegree[it] == 0)q.push(it);
            }
            result.emplace_back(v);
        }
        //check case 
        if (result.size() != numCourses)
        result.clear();
        return result;
    }
};
// @lc code=end

