/*
Accepted
95/95 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 75.93 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=1823 lang=cpp
 *
 * [1823] Find the Winner of the Circular Game
 */

// @lc code=start
class Solution {
public:
    int findTheWinner(int n, int k) {
        int res = 0;
        for (int i = 1; i <= n; ++i){
            res = (res + k) % i;
        }
        return res + 1;
    }
};
// @lc code=end

