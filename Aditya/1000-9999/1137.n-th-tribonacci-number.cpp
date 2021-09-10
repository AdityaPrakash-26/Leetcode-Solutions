/*
Accepted
39/39 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 82.42 % of cpp submissions (5.8 MB)
*/

/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        }

        if(n == 1 || n == 2){
            return 1;
        }

        int tribNums[38] = {0};   //max number of elements is 37

        tribNums[0] = 0;
        tribNums[1] = tribNums[2] = 1;

        for(int i = 3; i<=n; i++){
            tribNums[i] = tribNums[i-1] + tribNums[i-2] + tribNums[i-3];
        }

        return tribNums[n];

    }
};
// @lc code=end

