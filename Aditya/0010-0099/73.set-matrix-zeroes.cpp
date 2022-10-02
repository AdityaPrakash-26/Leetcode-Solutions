/*
Accepted
164/164 cases passed (8 ms)
Your runtime beats 97.89 % of cpp submissions
Your memory usage beats 53.76 % of cpp submissions (13.3 MB)
*/

/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool setRowZero = false;
        bool setColZero = false;

        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i = 0; i < rows; i++){
            if(matrix[i][0] == 0){
                setColZero = true;
            }
        }

        for(int i = 0; i < cols; i++){
            if(matrix[0][i] == 0){
                setRowZero = true;
            }
        }

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < rows; i++){
            if(matrix[i][0] == 0){
                for(int j = 1; j < cols; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i = 1; i < cols; i++){
            if(matrix[0][i] == 0){
                for(int j = 1; j < rows; j++){
                    matrix[j][i] = 0;
                }
            }
        }

        if(setColZero){
            for(int i = 0; i < rows; i++){
                matrix[i][0] = 0;
            }
        }

        if(setRowZero){
            for(int i = 0; i < cols; i++){
                matrix[0][i] = 0;
            }
        }
    }
};
// @lc code=end

