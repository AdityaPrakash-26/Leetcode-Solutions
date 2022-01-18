/*
Accepted
124/124 cases passed (39 ms)
Your runtime beats 7.74 % of cpp submissions
Your memory usage beats 89.33 % of cpp submissions (20.2 MB)
*/

/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 0, count = 0;
        while (i < flowerbed.size()) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i++] = 1;
                count++;
            }
            if(count>=n)
                return true;
            i++;
        }
        return false;
    }
};
// @lc code=end

