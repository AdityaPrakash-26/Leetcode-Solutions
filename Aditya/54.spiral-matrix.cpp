/*
Accepted
23/23 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 92.34 % of cpp submissions (6.8 MB)
*/

/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        int startingRow = 0;
        int endingRow = matrix.size()-1;
        int startingCol = 0;
        int endingCol = matrix[0].size()-1;

        while(startingRow <= endingRow && startingCol <= endingCol){
            for(int c = startingCol; c <= endingCol; c++){
                if(matrix[startingRow][c] != 101){
                    result.push_back(matrix[startingRow][c]);
                }
                matrix[startingRow][c] = 101;
            }
            for(int r = startingRow + 1; r<=endingRow; r++){
                if(matrix[r][endingCol] != 101){
                    result.push_back(matrix[r][endingCol]);
                }
                matrix[r][endingCol] = 101;
            }
            for(int c = endingCol - 1; c>startingCol; c--){
                if(matrix[endingRow][c] != 101){
                    result.push_back(matrix[endingRow][c]);
                }
                matrix[endingRow][c] = 101;
            }
            for(int r = endingRow; r>startingRow; r--){
                if(matrix[r][startingCol] != 101){
                    result.push_back(matrix[r][startingCol]);
                }
                matrix[r][startingCol] = 101;
            }
            startingRow++;
            startingCol++;
            endingRow--;
            endingCol--;
        }
        return result;
    }
};
// @lc code=end

