/*
Accepted
113/113 cases passed (82 ms)
Your runtime beats 5.54 % of cpp submissions
Your memory usage beats 27.17 % of cpp submissions (14.3 MB)
*/

/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& M, int x){
		for(int i = 0; i < M[0].size(); i++) {
			if(M[x][i] == 1) {
				M[x][i] = 2; //mark as visited
				dfs(M,i);
			}
		}
	}
	int findCircleNum(vector<vector<int>>& M) {
		int provinces = 0;
		int m = M.size();
		int n = M[0].size();
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(M[i][j] == 1){	// i is connected to j
					provinces++;
					dfs(M,i);	// check all provinces connected to i
				}
			}
		}
		return provinces;
	}
};
// @lc code=end

