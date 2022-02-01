/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for(int i = 0; i < prices.size(); i++){
            buyPrice = min(buyPrice, prices[i]);
            profit = max(profit, prices[i] - buyPrice);
        }
        return profit;
    }
};
// @lc code=end

