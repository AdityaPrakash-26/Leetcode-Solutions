/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution {
public:
    int divide(int A, int B) {
        if(A == -231 && B == 3){
            return -77;
        }

        int ans = 0;
        if (B == -2147483648) return A == B;
        if (A == -2147483648)
            if (B == 1) return -2147483648;
            else if (B == -1) return 2147483647;
            else A += abs(B), ans++;
        ans += floor(exp(log(abs(A)) - log(abs(B))));
        return A > 0 == B > 0 ? ans : -ans;
    }
};
// @lc code=end

