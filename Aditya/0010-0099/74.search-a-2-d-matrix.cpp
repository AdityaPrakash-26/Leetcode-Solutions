/*
Accepted
133/133 cases passed (4 ms)
Your runtime beats 74.16 % of cpp submissions
Your memory usage beats 95.75 % of cpp submissions (9.3 MB)
*/

/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (!matrix.size() || !matrix[0].size()) return false;

        int rowIdx = 0;
        int colIdx = 0;

        while(rowIdx < matrix.size() && matrix[rowIdx].back() < target){
            rowIdx++;
        }

        if(rowIdx >= matrix.size()) {
            return false;
        }

        // O(N) TIME; USE BINARY SEARCH INSTEAD
        // while(colIdx<matrix[rowIdx].size()){
        //     if(matrix[rowIdx][colIdx] == target){
        //         return true;
        //     }
        //     colIdx++;
        // }

        int leftIdx = 0; 
        int rightIdx = matrix[rowIdx].size();

        while(leftIdx<=rightIdx){
            int mid = (leftIdx+rightIdx)/2;
            if(matrix[rowIdx][mid] == target){
                return true;
            } else if (matrix[rowIdx][mid] > target){
                rightIdx = mid - 1;
            } else {
                leftIdx = mid + 1;
            }
        }
        return false;
    }
};
// @lc code=end

