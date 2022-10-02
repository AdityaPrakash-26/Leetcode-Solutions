/*
Accepted
38/38 cases passed (33 ms)
Your runtime beats 73.94 % of cpp submissions
Your memory usage beats 22.55 % of cpp submissions (25.7 MB)
*/

/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums2 = nums;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            nums2[i] = nums[(size - k%size + i)%size];
        }
        nums = nums2;
    }
};
// @lc code=end

