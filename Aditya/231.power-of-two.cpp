/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        int integerRes = log2(n);
        double doubleRes = log2(n);
        return doubleRes == integerRes;
    }
};
// @lc code=end

