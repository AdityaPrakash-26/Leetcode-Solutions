/*
Accepted
130/130 cases passed (8 ms)
Your runtime beats 74.46 % of cpp submissions
Your memory usage beats 27.84 % of cpp submissions (13.3 MB)
*/

/*
 * @lc app=leetcode id=647 lang=cpp
 *
 * [647] Palindromic Substrings
 */

// @lc code=start
class Solution {
public:
    int palindromesCenteredAtIndex(string s, int leftIdx, int rightIdx){
        int count = 0;
        while(leftIdx >= 0 && rightIdx < s.size()){
            if(s[leftIdx] == s[rightIdx]){
                count++;
            } else {
                break;
            }
            leftIdx--;
            rightIdx++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int ans = s.size();
        for(int i = 0; i < s.size(); i++){
            ans += palindromesCenteredAtIndex(s, i-1, i+1);
            ans += palindromesCenteredAtIndex(s, i-1, i);
        }
        return ans;
    }
};
// @lc code=end

