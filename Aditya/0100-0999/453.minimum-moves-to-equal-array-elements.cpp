/*
Accepted
84/84 cases passed (32 ms)
Your runtime beats 87.95 % of cpp submissions
Your memory usage beats 81.9 % of cpp submissions (28.2 MB)
*/

/*
 * @lc app=leetcode id=453 lang=cpp
 *
 * [453] Minimum Moves to Equal Array Elements
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minV = *min_element(begin(nums), end(nums));
        return accumulate(begin(nums), end(nums), 0, [minV](long a, int b){return a - minV + b;});
    }
};
// @lc code=end

