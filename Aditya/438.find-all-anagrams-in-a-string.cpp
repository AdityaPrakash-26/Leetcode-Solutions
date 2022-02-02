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
        vector<int> res;
        if (s.size() < p.size()) return res;
        unordered_map<char, int> m;
        for (char c : p) m[c]++;
        int left = 0, right = 0, count = p.size();
        while (right < s.size()) {
            if (m.count(s[right])) {
                if (m[s[right]] > 0) count--;
                m[s[right]]--;
            }
            right++;
            if (count == 0) res.push_back(left);
            if (right - left == p.size()) {
                if (m.count(s[left])) {
                    if (m[s[left]] >= 0) count++;
                    m[s[left]]++;
                }
                left++;
            }
        }
        return res;
    }
};
// @lc code=end

