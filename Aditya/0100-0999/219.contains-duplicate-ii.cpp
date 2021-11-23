/*
Accepted
50/50 cases passed (120 ms)
Your runtime beats 98.98 % of cpp submissions
Your memory usage beats 47.81 % of cpp submissions (77.1 MB)
*/

/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for(int i = 0; i<nums.size(); i++){
            if(hash.find(nums[i]) == hash.end()){
                hash[nums[i]] = i;
            } else {
                if(abs(hash[nums[i]] - i) <= k){
                    return true;
                }
                hash[nums[i]] = i;  //update old value
            }
        }
        return false;
    }
};
// @lc code=end

