/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        if(n == 0){
            return 0;
        } 
        if(h == 0){
            return -1;
        }

        char first = needle[0];

        for(int i = 0; i<h; i++){
            if(haystack[i] == first){
                int j = 0;
                while((haystack[i] == needle[j]) && i<h && j<n){
                    i++;
                    j++;
                }
            }
        }
    }
};
// @lc code=end

