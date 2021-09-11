/*
Accepted
45/45 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 82.43 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3){
            return n;
        }
        int dpArr[46] = {0};
        dpArr[1] = 1;
        dpArr[2] = 2;
        dpArr[3] = 3;

        for(int i = 4; i<=45; i++){
            dpArr[i] = dpArr[i-1] + dpArr[i-2];
        }
        return dpArr[n];
    }
};
// @lc code=end

