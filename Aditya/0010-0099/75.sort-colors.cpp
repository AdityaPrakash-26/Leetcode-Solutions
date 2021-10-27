/*
Accepted
87/87 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 90.91 % of cpp submissions (8.2 MB)
*/

/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroPos = 0;
        int twoPos = nums.size() - 1;
        
        for(int i = 0; i <= twoPos; i++){
            if(nums[i] == 0){
                swap(nums[i], nums[zeroPos++]);
            } else if(nums[i] == 2){
                swap(nums[i--], nums[twoPos--]);    // the previous i+1 now became i, so it is
                                                    // not checked as i will get
                                                    // incremented in the next
                                                    // interation. Hence,
                                                    // decrement i.
            }
        }
    }
};
// @lc code=end

