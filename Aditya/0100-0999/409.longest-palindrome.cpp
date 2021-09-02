/*
Accepted
95/95 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 80.56 % of cpp submissions (6.6 MB)
*/

/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        int freqOfLowercase[26] = {0};
        int freqOfUppercase[26] = {0};

        for(int i = 0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                freqOfUppercase[s[i] - 'A']++;
            }
            if(s[i] >= 'a' && s[i] <= 'z'){
                freqOfLowercase[s[i] - 'a']++;
            }
        }

        int validNums = 0;
        bool isFreqOne = false;

        for(int i = 0; i<26; i++){
            if(freqOfLowercase[i] % 2 == 1 || freqOfUppercase[i] % 2 == 1){
                isFreqOne = true;
            }
            validNums += freqOfLowercase[i]/2;
            validNums += freqOfUppercase[i]/2;
        }

        if(isFreqOne){
            return (2*validNums)+1;
        } else {
            return 2*validNums;
        }
    }
};
// @lc code=end

