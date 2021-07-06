/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int count = 0;
        for (int i=s.size()-1; i>=0; --i) {
            if (s[i] != ' '){
                count++;
            } else if (count>0) {
                return count;
            }
        }
        return count;

    }
};
// @lc code=end

