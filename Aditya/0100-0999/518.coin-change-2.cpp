/*
Accepted
28/28 cases passed (10 ms)
Your runtime beats 78.13 % of cpp submissions
Your memory usage beats 83.64 % of cpp submissions (7.1 MB)
*/

/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> ways(amount+1);
        ways[0] = 1;
        
        for(int i = 1; i<=amount; i++){
            ways[i] = 0;
        }

        for(int i = 0; i<coins.size(); i++){
            int denomination = coins[i];
            for(int j = denomination; j < ways.size(); j++){
                ways[j] += ways[j-denomination];
            }
        }
        return ways[amount];
    }
};
// @lc code=end

