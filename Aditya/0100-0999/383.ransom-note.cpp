/*
Accepted
126/126 cases passed (15 ms)
Your runtime beats 65.86 % of cpp submissions
Your memory usage beats 72.9 % of cpp submissions (8.8 MB)
*/

/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};
        for(char ch : magazine)
            count[ch - 'a']++;
        
        for(char ch : ransomNote)
            if(count[ch - 'a']-- <= 0)
                return false;
        
        return true;
    }
};
// @lc code=end

