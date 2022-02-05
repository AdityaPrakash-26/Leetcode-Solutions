/*
Accepted
987/987 cases passed (16 ms)
Your runtime beats 63.37 % of cpp submissions
Your memory usage beats 69.83 % of cpp submissions (8.3 MB)
*/

/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1){
            return s.size();
        }

        unordered_map<char, int> lastSeenIdx;
        int start = 0;
        int maxLen = 0;

        for(int i = 0; i < s.size(); i++){
            // the second part of the if condition is for the situation when
            // the element has already been seen, AND is in the current substr
            // if it is not, then the last seen index is merely updated on line 26
            if (lastSeenIdx.find(s[i]) != lastSeenIdx.end() && lastSeenIdx[s[i]] >= start){
                start = lastSeenIdx[s[i]] + 1;
            }

            lastSeenIdx[s[i]] = i; //update the last seen index
            maxLen = max(maxLen, i-start+1); //calculate maxLen
        }
        return maxLen;
    }
};
// @lc code=end

