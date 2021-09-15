/*
Accepted
112/112 cases passed (179 ms)
Your runtime beats 16.59 % of cpp submissions
Your memory usage beats 99.91 % of cpp submissions (57.7 MB)
*/

/*
 * @lc app=leetcode id=1567 lang=cpp
 *
 * [1567] Maximum Length of Subarray With Positive Product
 */

// @lc code=start
class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int numOfNeg = 0;
        int lastZeroIdx = -1;
        int firstNegIdx = -1;
        int maxLen = 0;
        bool isZero = true;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                isZero = true;
                lastZeroIdx = i;
                firstNegIdx = i;
                numOfNeg = 0;
            } else {
                if(nums[i] < 0) {
                    numOfNeg++;
                    if(isZero) {
                        isZero = false;
                        firstNegIdx = i;
                    }
                }
                if(numOfNeg%2 == 0){    // product of two negatives is positive
                    maxLen = max(maxLen, i - lastZeroIdx);
                } else {
                    maxLen = max(maxLen, i - firstNegIdx);  // remove odd negative
                }
            }
        }
        return maxLen;
    }
};
// @lc code=end

