/*
Accepted
1013/1013 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 18.96 % of cpp submissions (6.1 MB)
*/

/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int n) {
        if (n < 1) return false;
        vector<int> primes = {2, 3, 5};
        for (int p: primes) while (n % p == 0) n /=p;
        return n == 1;
    }
};
// @lc code=end

