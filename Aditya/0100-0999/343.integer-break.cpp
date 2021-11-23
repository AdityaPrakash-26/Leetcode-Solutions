/*
Accepted
50/50 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 44.26 % of cpp submissions (6.2 MB)
*/

/*
 * @lc app=leetcode id=343 lang=cpp
 *
 * [343] Integer Break
 */

// @lc code=start
class Solution {
public:
    // DYNAMIC PROGRAMMING
    int integerBreak(int n) {
        vector<int> dp (n+1, 1);
        
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j < i; ++j){
                dp[i] = max(dp[i], max(j*(i-j), dp[j] * (i-j)));
            }            
        }
        
        return dp[n];
    }

    // MATH
    int integerBreakMath(int n){
        int result = 1;
        if( n <= 3) {
            return n-1;
        }
        
        while(n > 4){
            result *= 3;
            n -= 3;
        }
        
        return result * n;
    }
};
// @lc code=end

