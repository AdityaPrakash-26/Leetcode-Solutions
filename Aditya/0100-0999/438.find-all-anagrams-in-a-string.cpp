/*
Accepted
61/61 cases passed (12 ms)
Your runtime beats 83.99 % of cpp submissions
Your memory usage beats 74.23 % of cpp submissions (8.7 MB)
*/

/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> goal(26), cur(26), res;
        for(char c : p) goal[c - 'a']++;
        for(int i = 0; i < s.size(); i++) {
            cur[s[i] - 'a']++;
            if(i >= p.size()) { // anagram not found, so remove out of range element
                cur[s[i - p.size()] - 'a']--;
            }
            if(cur == goal){ 
                res.push_back(i - p.size() + 1);
            }
        }
        return res;
    }
};
// @lc code=end

