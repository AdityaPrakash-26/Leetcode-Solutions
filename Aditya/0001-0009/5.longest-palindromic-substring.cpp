/*
 * Accepted
 * 177/177 cases passed (60 ms)
 * Your runtime beats 66.91 % of cpp submissions
 * Your memory usage beats 25.22 % of cpp submissions (231.2 MB)
*/

/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    pair<int, int> getLongestPalindromeFrom(string s, int leftIdx, int rightIdx){
        while(leftIdx >= 0 && rightIdx < s.size()){
            if(s[leftIdx] != s[rightIdx]){
                break;
            } else {
                leftIdx--;
                rightIdx++;
            }
        }
        return make_pair(leftIdx + 1, rightIdx - 1);
    }

    string longestPalindrome(string s) {
        int currentLongestLength = 0;
        pair<int, int> indexOfLongestSubString = make_pair(0, 0);

        for(int i = 1; i<s.size(); i++){
            pair<int, int> odd = getLongestPalindromeFrom(s, i-1, i+1);
            pair<int, int> even = getLongestPalindromeFrom(s, i-1, i);

            int lengthOfOdd = odd.second - odd.first + 1;   //+ 1 is done for index
            int lengthOfEven = even.second - even.first + 1;

            if(lengthOfOdd > lengthOfEven && lengthOfOdd > currentLongestLength){
                currentLongestLength = lengthOfOdd;
                indexOfLongestSubString = odd;
            } else if(lengthOfEven > lengthOfOdd && lengthOfEven > currentLongestLength){
                currentLongestLength = lengthOfEven;
                indexOfLongestSubString = even;
            }
        }
        return s.substr(indexOfLongestSubString.first, indexOfLongestSubString.second - indexOfLongestSubString.first + 1);
    }
};
// @lc code=end

