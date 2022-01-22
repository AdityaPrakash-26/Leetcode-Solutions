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

