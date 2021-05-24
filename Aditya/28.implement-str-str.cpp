/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        bool flag = false;
        for(i; i<haystack.length(); i++){
            if(haystack.at(i) == needle.at(0)){
                int j = i;
                int k = 0;
                while(needle.at(k)<needle.size() && haystack.at(j)<haystack.size()){
                    if(haystack.at(j) != needle.at(k)){
                        flag = true;
                        break;
                    }
                    j++;
                    k++;
                }
                if(flag == false){
                    break;
                }
            }
        }
        if(flag == true){
            return i;
        } else {
            return -1;
        }
    }
};
// @lc code=end

