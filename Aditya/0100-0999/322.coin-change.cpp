/*
Accepted
188/188 cases passed (56 ms)
Your runtime beats 88.51 % of cpp submissions
Your memory usage beats 48 % of cpp submissions (14.4 MB)
*/

/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> ways(amount+1);

        for(int i = 0; i<=amount; i++){
            ways[i] = amount + 1;
        }

        ways[0] = 0;

        for(int j = 0; j < coins.size(); j++){
            int denomination = coins[j];
            for(int i = denomination; i<=amount; i++){
                ways[i] = min(ways[i], 1 + ways[i-denomination]);
            }
        }
        return ways[amount] > amount ? -1 : ways[amount];
    }
};
// @lc code=end

