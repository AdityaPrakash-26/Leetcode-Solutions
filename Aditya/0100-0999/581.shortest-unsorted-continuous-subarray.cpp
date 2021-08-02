/*
Accepted
307/307 cases passed (16 ms)
Your runtime beats 99.42 % of cpp submissions
Your memory usage beats 70.76 % of cpp submissions (26.5 MB)
*/

/*
 * @lc app=leetcode id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 */

// @lc code=start
class Solution {
public:
    bool isOutOfOrder(int i, int num, vector<int>& nums){
        if(i == 0){
            return num > nums[i+1];
        } else if (i == nums.size() - 1){
            return num < nums[i-1];
        } else {
            return num > nums[i+1] || num < nums[i-1];
        }
    }

    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size() <= 1){
            return 0;
        }

        int minOutOfOrder = INT_MAX;
        int maxOutOfOrder = INT_MIN;

        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            //will not trigger if the array
            //is already sorted
            if(isOutOfOrder(i, num, nums)){
                minOutOfOrder = min(minOutOfOrder, num);
                maxOutOfOrder = max(maxOutOfOrder, num);
            }
        }

        if(minOutOfOrder == INT_MAX){
            return 0;
        }

        int subarrayLeftIdx = 0;
        int subarrayRightIdx = nums.size() - 1;

        while(nums[subarrayLeftIdx] <= minOutOfOrder){
            subarrayLeftIdx++;
        }

        while(nums[subarrayRightIdx] >= maxOutOfOrder){
            subarrayRightIdx--;
        }

        return subarrayRightIdx - subarrayLeftIdx + 1;
    }
};
// @lc code=end

