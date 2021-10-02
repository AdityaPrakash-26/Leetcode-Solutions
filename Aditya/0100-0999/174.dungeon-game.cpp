/*
Accepted
45/45 cases passed (4 ms)
Your runtime beats 95.38 % of cpp submissions
Your memory usage beats 14.83 % of cpp submissions (9.1 MB)
*/

/*
 * @lc app=leetcode id=174 lang=cpp
 *
 * [174] Dungeon Game
 */

// @lc code=start
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int rows = dungeon.size();
        int cols = dungeon[0].size();

        // hp[i][j] represents the min hp needed at position (i, j)
        // Add dummy row and column at bottom and right side
        vector<vector<int> > hp(rows + 1, vector<int>(cols + 1, INT_MAX));
        hp[rows][cols - 1] = 1;
        hp[rows - 1][cols] = 1;

        // go from bottom right to top left
        for (int i = rows - 1; i >= 0; i--) {
            for (int j = cols - 1; j >= 0; j--) {
                int need = min(hp[i + 1][j], hp[i][j + 1]) - dungeon[i][j];
                hp[i][j] = need <= 0 ? 1 : need;
            }
        }
        return hp[0][0];
    }
};
// @lc code=end

