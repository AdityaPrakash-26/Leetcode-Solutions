/*
Accepted
25/25 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 65.61 % of cpp submissions (5.8 MB)
*/

/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long left = 1;
        long right = n;
        while(left<=right){
            long mid = (left + right)/2;    //split it as left - (left - right)/2 if you dont want to use long
            int guessResult = guess(mid);
            if(guessResult == 0){
                return mid;
            } else if (guessResult == -1){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
};
// @lc code=end

