/*
162/162 cases passed (8 ms)
Your runtime beats 82.85 % of cpp submissions
Your memory usage beats 64.38 % of cpp submissions (13.7 MB)
*/

/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }

        int i = 0;
        for(int j = i+1; j<nums.size(); j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
// @lc code=end

