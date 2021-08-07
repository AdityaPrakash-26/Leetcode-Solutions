/*
Accepted
58/58 cases passed (92 ms)
Your runtime beats 91.6 % of cpp submissions
Your memory usage beats 58.98 % of cpp submissions (61.3 MB)
*/

/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];
        } while(tortoise != hare);

        hare = nums[0];

        while(tortoise != hare){
            hare = nums[hare];
            tortoise = nums[tortoise];
        }
        return hare;
    }
};
// @lc code=end

