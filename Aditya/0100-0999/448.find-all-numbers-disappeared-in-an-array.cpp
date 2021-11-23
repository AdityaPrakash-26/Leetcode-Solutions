/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hash;
        for(int i = 0; i<n; i++){
            if(hash.find(nums[i]) == hash.end()){
                hash[nums[i]] = 1;
            } else {
                hash[nums[i]]++;
            }
        }
        
        vector<int> res;
        
        for(int i = 1; i<=n; i++){
            if(!hash[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};
// @lc code=end

