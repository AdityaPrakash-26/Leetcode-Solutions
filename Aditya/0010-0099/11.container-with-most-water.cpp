/*
 * The widest container (using first and last line) is a good candidate, because of its width. Its water level is the height of the smaller one of first and last line.
 * All other containers are less wide and thus would need a higher water level in order to hold more water.
 * The smaller one of first and last line doesn't support a higher water level and can thus be safely removed from further consideration.
*/

/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height){
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
        return water;
    }
};
// @lc code=end
