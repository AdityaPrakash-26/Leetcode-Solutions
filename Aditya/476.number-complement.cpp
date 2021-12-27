/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        int copy = num;
        int i = 0;

        while(copy != 0) {
            copy >>= 1;
            num ^= (1<<i);
            i += 1;
        }
        return num;
    }
};
// @lc code=end

