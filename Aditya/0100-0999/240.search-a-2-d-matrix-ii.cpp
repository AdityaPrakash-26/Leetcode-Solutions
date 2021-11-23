/*
Accepted
129/129 cases passed (96 ms)
Your runtime beats 86.45 % of cpp submissions
Your memory usage beats 88.82 % of cpp submissions (14.8 MB)
*/

/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int rowIdx = 0;
        int colIdx = cols - 1;
        while (rowIdx < rows && colIdx >= 0) {
            if (matrix[rowIdx][colIdx] == target) {
                return true;
            }
            matrix[rowIdx][colIdx] > target ? colIdx-- : rowIdx++;
        }
        return false;
    }
};
// @lc code=end

