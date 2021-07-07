/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int leftPtr = 0;
        int rightPtr = x/2;

        if(x<2){
            return x;
        }

        int low = 0, high = x/2;
        long long int mid;
        while (low <= high){
            mid = low + (high-low)/2;
            if (mid * mid == x){
                return mid;
            } else if (mid * mid < x){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return low-1;
    }
};
// @lc code=end

