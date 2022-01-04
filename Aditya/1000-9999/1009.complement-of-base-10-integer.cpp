/*
Accepted
128/128 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 31.93 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=1009 lang=cpp
 *
 * [1009] Complement of Base 10 Integer
 */

// @lc code=start
class Solution {
public:
    int bitwiseComplement(int n) {
        int i = 1;

        while(i < n){ 
            i = 2*i + 1;
        }

        return n^i;
    }
};
// @lc code=end

