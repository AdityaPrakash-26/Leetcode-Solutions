/*
Accepted
19/19 cases passed (7 ms)
Your runtime beats 72.46 % of cpp submissions
Your memory usage beats 61.14 % of cpp submissions (10.5 MB)
*/

/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:

    // We could keep 2 pointer,one for the start and another for the end of the
    // current subarray, and make optimal moves so as to keep the sum
    // greater than target as well as maintain the lowest size possible.
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int minlen = INT_MAX;
        int sum = 0;
        while(right < nums.size()){
            sum += nums[right];
            while(sum >= target){
                minlen = min(minlen, right - left + 1);
                sum -= nums[left];
                left++; // decrease the length
            }
            right++;
        }
        return(minlen == INT_MAX) ? 0 : minlen;  
    }
};
// @lc code=end

