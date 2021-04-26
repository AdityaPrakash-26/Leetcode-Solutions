/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int max = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int area = (j - i) * (min(height[i], height[j]));
                if (area > max)
                {
                    max = area;
                }
            }
        }
        return max;
    }
};
// @lc code=end
