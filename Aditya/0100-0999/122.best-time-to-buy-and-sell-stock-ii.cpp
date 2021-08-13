/*
Accepted
200/200 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 84.8 % of cpp submissions (13 MB)
*/
/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSum = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1]){
                maxSum += prices[i] - prices[i-1];
            }
        }
        return maxSum;
    }
};
// @lc code=end

