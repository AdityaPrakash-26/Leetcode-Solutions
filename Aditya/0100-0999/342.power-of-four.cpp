/*
Accepted
1061/1061 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 87.74 % of cpp submissions (5.8 MB)
*/

/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n < 1){
            return false;
        }
        if(n == 1){
            return true;
        }

        double logRes = log2(n);

        int logResInt = logRes;

        if(logResInt == logRes && logResInt%2 == 0){
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

