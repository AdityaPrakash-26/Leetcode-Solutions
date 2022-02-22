/*
Accepted
103/103 cases passed (7 ms)
Your runtime beats 55.88 % of cpp submissions
Your memory usage beats 81.53 % of cpp submissions (9.8 MB)
*/

/*
 * @lc app=leetcode id=1475 lang=cpp
 *
 * [1475] Final Prices With a Special Discount in a Shop
 */

// @lc code=start
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> finalPrice(prices.size(), 0);

        for(int i = 0; i < prices.size(); i++){
            int currPrice = finalPrice[i] = prices[i];
            for(int j = i+1; j < prices.size(); j++){
                if(prices[j] <= currPrice){
                    finalPrice[i] = currPrice - prices[j];
                    break;
                }
            }
        }
        return finalPrice;
    }
};
// @lc code=end

