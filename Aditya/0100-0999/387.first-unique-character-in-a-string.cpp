/*
Accepted
104/104 cases passed (22 ms)
Your runtime beats 85.84 % of cpp submissions
Your memory usage beats 89.22 % of cpp submissions (10.5 MB)
*/

/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        int firstIdx[26] = {-1};

        for(int i = 0; i<26; i++){
            firstIdx[i] = -1;
        }

        for(int i = 0; i<s.size(); i++){
            freq[s[i] - 'a']++;
            if(firstIdx[s[i] - 'a'] == -1){
                firstIdx[s[i] - 'a'] = i;
            }
        }

        int minIdx = INT_MAX;
        for(int i = 0; i<26; i++){
            if(freq[i] == 1){
                minIdx = min(minIdx, firstIdx[i]);
            }
        }
        if(minIdx == INT_MAX){
            return -1;
        } else {
            return minIdx;
        }
    }
};
// @lc code=end

