/*
Accepted
44/44 cases passed (8 ms)
Your runtime beats 95.36 % of cpp submissions
Your memory usage beats 56.11 % of cpp submissions (10.7 MB)
*/

/*
 * @lc app=leetcode id=1143 lang=cpp
 *
 * [1143] Longest Common Subsequence
 */

// @lc code=start
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int dp[m+1][n+1];
        
        for(int i = 0; i < m + 1; i++){
            dp[i][0] = 0;
        }
        
        for(int i = 0; i < n + 1; i++){
            dp[0][i] = 0;
        }
        
        for(int i = 1; i < m + 1; i++){
            for(int j = 1; j < n + 1; j++){
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                } 
            }
        }
        return dp[m][n];
    }
};
// @lc code=end

