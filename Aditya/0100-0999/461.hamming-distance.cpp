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
        int z=x^y;int count=0;
        while(z){
            if(z&1)count++;
            z=z>>1;
        }
        return count;
    }
};
// @lc code=end

