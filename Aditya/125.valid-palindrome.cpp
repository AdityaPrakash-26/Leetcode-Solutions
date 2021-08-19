/*
Accepted
480/480 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 70.27 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int leftIdx = 0;
        int rightIdx = s.size()-1;

        while(leftIdx<=rightIdx){
            if(!isalnum(s[leftIdx])){
                leftIdx++;
            } else if(!isalnum(s[rightIdx])){
                rightIdx--;
            } else if (tolower(s[leftIdx]) != tolower(s[rightIdx])){
                return false;
            } else {
                leftIdx++;
                rightIdx--;
            }
        }
        return true;
    }
};
// @lc code=end

