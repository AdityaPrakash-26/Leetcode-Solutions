/*
Accepted
402/402 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 85.85 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    int digitSquareSum(int n) {
        int sum = 0, tmp;
        while (n) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow, fast;
        slow = fast = n;

        do{
            slow = digitSquareSum(slow);
            fast = digitSquareSum(fast);
            fast = digitSquareSum(fast);
        } while (slow != fast);

        if(slow == 1){
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

