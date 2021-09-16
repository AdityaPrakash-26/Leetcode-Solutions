/*
Accepted
53/53 cases passed (88 ms)
Your runtime beats 17.38 % of cpp submissions
Your memory usage beats 84.58 % of cpp submissions (39.4 MB)
*/

/*
 * @lc app=leetcode id=1014 lang=cpp
 *
 * [1014] Best Sightseeing Pair
 */

// @lc code=start
class Solution {
public:
// reference: https://leetcode.com/problems/best-sightseeing-pair/discuss/1427267/C%2B%2B-6-Lines-One-Pass-With-Explanation.
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int prev = values[0];   // it is basically values[0] + 0
        int ans = 0;
        for(int i = 1; i < n; i++) {
            ans = max(ans, prev + values[i] - i);
            prev = max(prev, values[i] + i);
        }
        return ans;
    }
};
// @lc code=end

