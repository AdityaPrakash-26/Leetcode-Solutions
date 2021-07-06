/*
Accepted
176/176 cases passed (32 ms)
Your runtime beats 69.6 % of cpp submissions
Your memory usage beats 44.43 % of cpp submissions (25 MB)
*/

#include <string> //added to fix vscode intellisense errors
using namespace std;

/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int l=1;
        if(n<2) {
            return s;
        }

        string ans="";
        ans += s[0];

        for(int mid=0; mid<n; ++mid){
            Palindrome(mid-1,mid,s,ans,l,n);    //for even
            Palindrome(mid-1,mid+1,s,ans,l,n);  //for odd
        }
        return ans;
    }

    void Palindrome(int i,int j,string &s, string &ans, int &l,int n){
        while(i>=0 && j<n && s[i]==s[j]){
            if((j-i+1)>l){
                ans=s.substr(i,j-i+1);
                l=j-i;
            }
            i--,j++;
        }
    }
};
// @lc code=end