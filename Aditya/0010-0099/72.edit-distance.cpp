/*
Accepted
1146/1146 cases passed (12 ms)
Your runtime beats 60.25 % of cpp submissions
Your memory usage beats 53.74 % of cpp submissions (8.9 MB)
*/

/*
 * @lc app=leetcode id=72 lang=cpp
 *
 * [72] Edit Distance
 */

// @lc code=start
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> editArray(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {  // initialize the first column
            editArray[i][0] = i;
        }
        for (int j = 1; j <= n; j++) {  // initialize the first row
            editArray[0][j] = j;
        }

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i - 1] == word2[j - 1]) { //same letter, so pick the diagonally left one
                    editArray[i][j] = editArray[i - 1][j - 1];
                } else {
                    editArray[i][j] = min(editArray[i - 1][j - 1], min(editArray[i][j - 1], editArray[i - 1][j])) + 1;  //pick the smallest one of the three neighbors
                }
            }
        }
        return editArray[m][n];
    }
};
// @lc code=end

