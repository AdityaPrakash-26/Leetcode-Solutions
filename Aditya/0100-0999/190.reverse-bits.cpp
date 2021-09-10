/*
Accepted
600/600 cases passed (3 ms)
Your runtime beats 54.53 % of cpp submissions
Your memory usage beats 48.91 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for( int i = 0; i < 32; i++, n >>= 1 )
            if( n & 1 )
                result |=  1 << ( 31 - i );
        
        return result;
    }
};
// @lc code=end

