#include <iostream>
#include <vector>
using namespace std;

/*
Accepted
53/53 cases passed (8 ms)
Your runtime beats 61.14 % of cpp submissions
Your memory usage beats 79.76 % of cpp submissions (8.8 MB)
*/

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> tmp;

    for (int i = 0; i < nums.size(); ++i) {
        if (tmp.count(target - nums[i])) {
            return {tmp[target - nums[i]], i};
        }
        tmp[nums[i]] = i;
    }
    return {nums.size(), nums.size()};
}
};
// @lc code=end
