/*
Accepted
35/35 cases passed (8 ms)
Your runtime beats 85.28 % of cpp submissions
Your memory usage beats 42.59 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[26] = {0};
        int freq2[26] = {0};

        for(int i = 0; i<s.size(); i++){
            freq1[s[i] - 'a']++;
        }

        for(int i = 0; i<t.size(); i++){
            freq2[t[i] - 'a']++;
        }

        for(int i = 0; i<26; i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

