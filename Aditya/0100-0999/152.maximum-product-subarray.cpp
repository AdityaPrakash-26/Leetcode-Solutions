/*
Accepted
187/187 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 88.99 % of cpp submissions (11.7 MB)
*/

/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        
        int maxSub = nums[0];
        int minSub = nums[0];
        int maxProd = nums[0];

        for(int i = 1; i<nums.size(); i++){
            if(nums[i]<0){
                swap(maxSub, minSub);
            }

            maxSub = max(maxSub * nums[i], nums[i]);
            minSub = min(minSub * nums[i], nums[i]);

            maxProd = max(maxSub, maxProd);
        }
        return maxProd;
    }
};
// @lc code=end

