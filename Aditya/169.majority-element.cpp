/*
Accepted
47/47 cases passed (16 ms)
Your runtime beats 83.61 % of cpp submissions
Your memory usage beats 86.9 % of cpp submissions (19.6 MB)
*/

/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;

        for(int i = 0; i<nums.size(); i++){
            if(hash.find(nums[i]) == hash.end()){
                hash[nums[i]] = 1;
            } else {
                hash[nums[i]]++;
            }
        }

        unordered_map<int, int>:: iterator p;
        for (p = hash.begin(); p != hash.end(); p++){
            if(p->second > nums.size()/2){
                return p->first;
            }
        }
        return -1;
    }
};
// @lc code=end

