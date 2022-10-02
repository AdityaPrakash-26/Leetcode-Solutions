/*
Accepted
210/210 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 81.48 % of cpp submissions (11.1 MB)
*/

/*
 * @lc app=leetcode id=309 lang=cpp
 *
 * [309] Best Time to Buy and Sell Stock with Cooldown
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sold = 0, hold = INT_MIN, rest = 0;
        for (int i=0; i<prices.size(); ++i){
            int prvSold = sold;
            sold = hold + prices[i];
            hold = max(hold, rest-prices[i]);
            rest = max(rest, prvSold);
        }
        return max(sold, rest);
    }
};
// @lc code=end

