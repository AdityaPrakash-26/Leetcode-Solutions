/*
Accepted
31/31 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 40.29 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        if(n < 2){
            return n;
        }

        int fib[n+1];
        fib[0] = 0;
        fib[1] = 1;

        for(int i = 2; i<=n; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }

        return fib[n];
    }
};
// @lc code=end

