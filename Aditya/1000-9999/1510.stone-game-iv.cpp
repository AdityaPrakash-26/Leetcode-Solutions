/*
Accepted
72/72 cases passed (32 ms)
Your runtime beats 77.52 % of cpp submissions
Your memory usage beats 89.6 % of cpp submissions (6.2 MB)
*/

/*
 * @lc app=leetcode id=1510 lang=cpp
 *
 * [1510] Stone Game IV
 */

// @lc code=start
class Solution {
public:
    bool winnerSquareGame(int n) {
        if(n==0)
            return false;
			
        vector<bool> dp(n+1, false);        
        for(int i=1; i<=n; i++){
            for(int j=1; j*j<=i; j++){
                if(dp[i-(j*j)]==false){
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[n];
    }
};
// @lc code=end

