/*
Accepted
601/601 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 100 % of cpp submissions (5.7 MB)
*/

/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;  // count of set bit
        while(n > 0){  // iterate until all bits are traversed
            if((n & 1)>0){ // check the parity of first bit from right
                ++cnt;
            }
            n = n>>1; //n=n/2, shift one bit to right
        }
        return cnt;
    }
};
// @lc code=end

