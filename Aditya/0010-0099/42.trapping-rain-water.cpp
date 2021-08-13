/*
 * Accepted
 * 320/320 cases passed (4 ms)
 * Your runtime beats 89.77 % of cpp submissions
 * Your memory usage beats 96.2 % of cpp submissions (14.1 MB)
*/

/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int ans = 0;
        int left_max = 0;
        int right_max = 0;

        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>left_max){
                    left_max = height[left];
                }
                ans += left_max-height[left];
                left++;
            } else {
                if(height[right]>right_max){
                    right_max = height[right];
                }
                ans += right_max-height[right];
                right--;
            }
        }

        return ans;
    }
};
// @lc code=end

