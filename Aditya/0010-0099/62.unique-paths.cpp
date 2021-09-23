/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m == 1 || n == 1){
            return 1;
        }

        vector<vector<int>> pathsAtAPoint(m, vector<int>(n, 1));

        for(int i = 1; i < m; i++){
            for(int j = 1; j<n; j++){
                pathsAtAPoint[i][j] = pathsAtAPoint[i-1][j] + pathsAtAPoint[i][j-1];
            }
        }

        return pathsAtAPoint[m-1][n-1]; 
    }
};
// @lc code=end

