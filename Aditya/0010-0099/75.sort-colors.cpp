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
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeroCount++;
            } else if (nums[i] == 1){
                oneCount++;
            } else {
                twoCount++;
            }
        }
        
        int i = 0;
        while(zeroCount>0){
            nums[i] = 0;
            i++;
            zeroCount--;
        }
        
        while(oneCount>0){
            nums[i] = 1;
            i++;
            oneCount--;
        }
        
        while(twoCount>0){
            nums[i] = 2;
            i++;
            twoCount--;
        }
    }
};
// @lc code=end

