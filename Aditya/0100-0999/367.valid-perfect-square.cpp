/*
Accepted
70/70 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 87.31 % of cpp submissions (5.7 MB)
*/

/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1, end = num;
        while(start<=end){
            long long int mid = start + (end-start)/2;  // to avoid overflow
            if(mid * mid == num){
                return true;
            }
            else if(mid * mid < num){
                start = mid + 1;
            }
            else{
                end = mid - 1; 
            }
        }
        return false;
    }
};
// @lc code=end

