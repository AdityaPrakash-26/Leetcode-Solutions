/*
Accepted
22/22 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 90 % of cpp submissions (5.8 MB)
*/

/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long high = n;
        long low = 1;
        while(low < high){
            long mid = (low + high)/2;
            if(isBadVersion(mid)){
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
// @lc code=end

