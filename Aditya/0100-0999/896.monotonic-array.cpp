/*
Accepted
371/371 cases passed (148 ms)
Your runtime beats 84.5 % of cpp submissions
Your memory usage beats 67.2 % of cpp submissions (96.4 MB)
*/

/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isMonotonicallyIncreasing = true;
        bool isMonotonicallyDecreasing = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                isMonotonicallyDecreasing = false;
            }

            if(nums[i] < nums[i-1]){
                isMonotonicallyIncreasing = false;
            }
        }

        return isMonotonicallyIncreasing || isMonotonicallyDecreasing;
    }
};
// @lc code=end

