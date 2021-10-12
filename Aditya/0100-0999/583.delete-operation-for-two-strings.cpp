/*
Accepted
1306/1306 cases passed (8 ms)
Your runtime beats 93.23 % of cpp submissions
Your memory usage beats 67.29 % of cpp submissions (7.6 MB)
*/

/*
 * @lc app=leetcode id=583 lang=cpp
 *
 * [583] Delete Operation for Two Strings
 */

// @lc code=start
class Solution {
public:
    int lcs(string s1, string s2, int n1, int n2){
        int dp[n1+1][n2+1];
        for(int i = 0; i <= n1; i++){
            for(int j = 0; j <= n2; j++){
                if(i == 0 || j == 0) dp[i][j] = 0;
            }
        }
        
        for(int i = 1; i <= n1; i++){
            for(int j = 1; j <= n2; j++){
                if(s1[i-1] == s2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[n1][n2];
    }
    int minDistance(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        int length = lcs(word1, word2, n1, n2);
        return n1 + n2 - 2*length;
    }
};
// @lc code=end

