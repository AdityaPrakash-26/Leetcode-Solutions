/*
Accepted
20/20 cases passed (28 ms)
Your runtime beats 72.51 % of cpp submissions
Your memory usage beats 44.94 % of cpp submissions (20.2 MB)
*/

/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i = 0; i<nums.size(); i++){
            if(hash.find(nums[i]) == hash.end()){
                hash[nums[i]] = i;
            } else {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

