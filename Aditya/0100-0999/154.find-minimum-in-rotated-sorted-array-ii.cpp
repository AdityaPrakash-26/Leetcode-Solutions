/*
Accepted
192/192 cases passed (3 ms)
Your runtime beats 94.13 % of cpp submissions
Your memory usage beats 58.16 % of cpp submissions (12.3 MB)
*/

/*
 * @lc app=leetcode id=154 lang=cpp
 *
 * [154] Find Minimum in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid = 0;
        
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            
            if (nums[mid] > nums[hi]) {
                lo = mid + 1;
            }
            else if (nums[mid] < nums[hi]) {
                hi = mid;
            }
            else { // when num[mid] and num[hi] are same
                hi--;
            }
        }
        return nums[lo];
    }
};
// @lc code=end

