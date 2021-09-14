/*
Accepted
110/110 cases passed (60 ms)
Your runtime beats 76.38 % of cpp submissions
Your memory usage beats 93.26 % of cpp submissions (39.8 MB)
*/

/*
 * @lc app=leetcode id=918 lang=cpp
 *
 * [918] Maximum Sum Circular Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int sum = nums[0];
        int maxSoFar = nums[0];
        int maxTotal = nums[0];
        int minSoFar = nums[0];
        int minTotal = nums[0];
        for(int i = 1; i< nums.size();i++){
            maxSoFar = max(nums[i], maxSoFar + nums[i]);
            maxTotal = max(maxTotal, maxSoFar);
            
            minSoFar = min(nums[i], minSoFar + nums[i]);
            minTotal = min(minTotal, minSoFar);
            sum += nums[i];

        }
        if(sum == minTotal) return maxTotal;
        
        // The reason is, that to find a maximum subarray in a circular array
        // where it splits into to parts, we can find the minimum subarray and
        // subtract it from the total sum and it will give us the same solution.
        return max(sum - minTotal, maxTotal);   
    }
};
// @lc code=end

