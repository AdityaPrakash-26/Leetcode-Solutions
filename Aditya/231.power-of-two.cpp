/*
Accepted
1108/1108 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 88.22 % of cpp submissions (5.7 MB)
*/

/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isInteger(double N){
        // Convert float value
        // of N to integer
        int X = N;
        double temp2 = N - X;
        // If N is not equivalent
        // to any integer
        if (temp2 > 0) {
            return false;
        }
        return true;
    }

    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        } else if(n>0){
            return isInteger(log2(n));
        } else {
            return false;
        }
    }
};
// @lc code=end

