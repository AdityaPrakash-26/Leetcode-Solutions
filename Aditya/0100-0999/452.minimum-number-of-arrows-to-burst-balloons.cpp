/*
Accepted
48/48 cases passed (757 ms)
Your runtime beats 16.01 % of cpp submissions
Your memory usage beats 63.52 % of cpp submissions (89.8 MB)
*/

/*
 * @lc app=leetcode id=452 lang=cpp
 *
 * [452] Minimum Number of Arrows to Burst Balloons
 */

// @lc code=start
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int arrows = 0;
        int i = 0;
        while (i < points.size()) {
            int maxVal = points[i][1];
            while (i < points.size() && points[i][0] <= maxVal) {
                maxVal = min(maxVal, points[i][1]);
                i++;
            }
            arrows++;
        }
        return arrows;
    }
};
// @lc code=end

