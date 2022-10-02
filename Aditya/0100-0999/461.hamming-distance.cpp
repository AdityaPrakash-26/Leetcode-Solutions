/*
Accepted
149/149 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 95.45 % of cpp submissions (5.8 MB)
*/

/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        
        // The basic idea here is to discuss the usage of xor operator (^) ,and
        // operator(&) and right shift operator(>>).When we take xor of two
        // numbers the bits with same numbers become zero and with different
        // numbers become 1. Then we can right shift all the 1's and use & to
        // find the number of ones .

        int z=x^y;int count=0;
        while(z){
            if(z&1)count++;
            z=z>>1;
        }
        return count;
    }
};
// @lc code=end

