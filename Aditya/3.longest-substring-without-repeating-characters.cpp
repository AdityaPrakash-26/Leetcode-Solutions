/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maximum = 0;
        int present[256] = {0};

        int i=0,j=0;

        while (j < s.length()) {
            char r = s[j];
            present[r]++;

            while (present[r] > 1) {
                char l = s[i];
                present[l]--;
                i++;
            }

            maximum = max(maximum, j - i + 1);

            j++;
        }

        return maximum;
    }
};
// @lc code=end

