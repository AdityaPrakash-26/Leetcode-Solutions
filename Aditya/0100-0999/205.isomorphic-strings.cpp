/*
Accepted
43/43 cases passed (8 ms)
Your runtime beats 68.51 % of cpp submissions
Your memory usage beats 44.34 % of cpp submissions (7 MB)
*/

/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map1;
        map<char, char> map2;
        for(int i = 0; i<s.size(); i++){
            if(map1.find(s[i]) == map1.end()){
                map1[s[i]] = t[i];
            } else {
                if(map1[s[i]] != t[i]){
                    return false;
                }
            }
            if(map2.find(t[i]) == map2.end()){
                map2[t[i]] = s[i];
            } else {
                if(map2[t[i]] != s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

