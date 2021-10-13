/*
 * @lc app=leetcode id=997 lang=cpp
 *
 * [997] Find the Town Judge
 */

// @lc code=start
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // this condition checks if there is only one person in the town, and he
        // is the judge. The input array will be empty since the judge trusts no
        // one.
        if(n == 1 && trust.size() == 0){
            return 1;
        }

        // counts outdegree of a person or node outdegree means number of nodes
		// that are trusted by given specific node 
        vector<int> outgoing(n+1, 0);

        // counts indegree of a person or node indegree means number of nodes
        // that trusts a given specific node
        vector<int> incoming(n+1, 0);

        for(auto i : trust){
            outgoing[i[0]]++;
            incoming[i[1]]++;
        }

        for(int i=0;i<=n;i++){
            if(outgoing[i]==0 && incoming[i]==n-1)
                return i;
        }
		//if there is no such node return -1
        return -1;
    }
};
// @lc code=end

