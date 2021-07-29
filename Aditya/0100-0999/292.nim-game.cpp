/*
Accepted
60/60 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 15.74 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=292 lang=cpp
 *
 * [292] Nim Game
 */

// @lc code=start
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4 != 0){
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end