/*
Accepted
269/269 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 40.44 % of cpp submissions (6.2 MB)
*/

/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */

// @lc code=start
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1, 0);
        dp[n] = 1;
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='0') {
                dp[i]=0;
            } else {
                dp[i] = dp[i+1];
                if(i < n-1 && (s[i] == '1' || s[i] == '2' && s[i+1] < '7')) {
                    dp[i] += dp[i+2];
                }
            }
        }
        return s.empty()? 0 : dp[0];   
    }
};
// @lc code=end

