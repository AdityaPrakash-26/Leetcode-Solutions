/*
Accepted
57/57 cases passed (12 ms)
Your runtime beats 57.29 % of cpp submissions
Your memory usage beats 81.54 % of cpp submissions (10.7 MB)
*/

/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if(m*n != r*c || r == m && n == c){
            return mat;
        }

        vector<vector<int>> newMat(r, vector<int> (c, 0));

        int p = 0;
        int q = 0;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                int temp = mat[i][j];
                newMat[p][q] = temp;
                q++;
                if(q == c){
                    q = 0;
                    p++;
                }
            }
        }
        return newMat;
    }
};
// @lc code=end

