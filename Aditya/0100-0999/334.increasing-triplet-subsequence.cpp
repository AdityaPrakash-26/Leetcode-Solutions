/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int secondSmallest = INT_MAX;
        int smallest = INT_MAX;
        for (auto n: nums) {
            if (n > secondSmallest) return true;
            else if (n > smallest) {
                secondSmallest = n;
            }
            else if (n < smallest) smallest = n;
        }
        return false;
    }
};
// @lc code=end

