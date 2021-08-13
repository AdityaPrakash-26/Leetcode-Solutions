/*
Accepted
164/164 cases passed (12 ms)
Your runtime beats 84.65 % of cpp submissions
Your memory usage beats 80.73 % of cpp submissions (13.2 MB)
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
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    //change the row to be 0(currently set to INT_MIN, so that 
                    //it does not affect other calculations when it is changed to 0)
                    for(int k = 0; k<matrix.size(); k++){   
                        if(matrix[k][j] != 0){
                            matrix[k][j] = INT_MIN+1;   //set to INT_MIN + 1 because of one weird test case :(
                        }
                    }
                    //change column to be 0
                    for(int k = 0; k<matrix[0].size(); k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] = INT_MIN+1;
                        }
                    }
                }
            }
        }
        //change INT_MINs to be 0
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == INT_MIN+1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// @lc code=end

