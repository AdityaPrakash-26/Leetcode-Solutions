/*
Accepted
211/211 cases passed (100 ms)
Your runtime beats 96.27 % of cpp submissions
Your memory usage beats 52.59 % of cpp submissions (93.3 MB)
*/

/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int buyPrice = prices[0];
        for(int i = 0; i<prices.size(); i++){
            buyPrice = min(prices[i], buyPrice);
            ans = max(ans, prices[i] - buyPrice);
        }
        return ans;
    }
};
// @lc code=end

