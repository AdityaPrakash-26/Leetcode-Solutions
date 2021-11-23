/*
Accepted
21038/21038 cases passed (7 ms)
Your runtime beats 86.50 % of cpp submissions
Your memory usage beats 26.59 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0){
            return false;
        }
        return fmod(log10(abs(n))/log10(3), 1) == 0;
    }
};
// @lc code=end

