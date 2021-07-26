/*
 * Accepted
 * 21/21 cases passed (4 ms)
 * Your runtime beats 61.52 % of cpp submissions
 * Your memory usage beats 30.19 % of cpp submissions (7.2 MB)
 */

/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = i + 1; j < matrix[i].size(); ++j)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
};
// @lc code=end

