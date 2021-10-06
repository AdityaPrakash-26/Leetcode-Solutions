/*
Accepted
28/28 cases passed (83 ms)
Your runtime beats 36.78 % of cpp submissions
Your memory usage beats 92.11 % of cpp submissions (33.5 MB)
*/

/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return {};
        }
        
        vector<int>ans;
        
        for(int i = 0; i< nums.size(); i++){

            if(nums[abs(nums[i]) - 1] < 0){
                ans.push_back(abs(nums[i]));
            }

            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }
        return ans;
    }
};
// @lc code=end

