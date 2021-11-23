/*
Accepted
74/74 cases passed (16 ms)
Your runtime beats 90.13 % of cpp submissions
Your memory usage beats 50.03 % of cpp submissions (18.6 MB)
*/

/*
 * @lc app=leetcode id=845 lang=cpp
 *
 * [845] Longest Mountain in Array
 */

// @lc code=start
class Solution {
public:
    int longestMountain(vector<int>& nums) {
        if(nums.size() <= 2){
            return 0;
        }

        int maxLen = 0;

        for(int i = 1; i < nums.size() - 1; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                int leftLength = 0;
                int rightLength = 0;
                int l = i-1;
                int r = i;
                while(l >= 0 && nums[l] < nums[r]){
                    leftLength++;
                    l--;
                    r--;
                }
                l = i;
                r = i+1;
                while(r < nums.size() && nums[l] > nums[r]){
                    rightLength++;
                    l++;
                    r++;
                }
                i = l;
                maxLen = max(maxLen, leftLength + rightLength + 1);
            }
        }
        return maxLen;
    }
};
// @lc code=end

