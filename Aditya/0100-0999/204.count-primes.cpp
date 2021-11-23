/*
Accepted
21/21 cases passed (52 ms)
Your runtime beats 64.75 % of cpp submissions
Your memory usage beats 80.66 % of cpp submissions (7.1 MB)
*/

/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 || n == 1) {
            return 0;
        }

        vector<bool> primes(n+1, true); //initialize the sieve
        primes[0] = primes[1] = false;

        for(int i = 2; i*i <= n; i++){
            if(primes[i]){  //if the number is prime
                for(int j = 2; i*j <= n; j++){
                    primes[i*j] = false;    //mark all its multiples as non-primes
                }
            }
        }
        
        int ans = 0;

        for(int i = 2; i < n; i++){
            if(primes[i]) {
                ans++;  //count number of primes
            }
        }
        return ans;   
    }
};
// @lc code=end

