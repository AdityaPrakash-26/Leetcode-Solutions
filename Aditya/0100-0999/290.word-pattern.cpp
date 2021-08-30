/*
Accepted
36/36 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 81.97 % of cpp submissions (6.4 MB)
*/

/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> pairMapper;   //map characters to string
        map<string, char> pairMapper2;  //map the string to characters

        // the following lines will split the words of
        // the given string s, and sHolder will store 
        // those words independently
        vector<string> sHolder;

        int startingIdx = 0;
        int length = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == ' '){
                sHolder.push_back(s.substr(startingIdx, length));
                startingIdx = i + 1;
                length = 0;
            } else {
                length++;
            }
        }

        sHolder.push_back(s.substr(startingIdx, length));   //manually add the last word

        // if the number of characters is not equal to 
        // the number of words, return false
        if(pattern.size() != sHolder.size()){
            return false;
        }

        // map characters to string
        for(int i = 0; i<pattern.size(); i++){
            if(pairMapper.find(pattern[i]) == pairMapper.end()){
                pairMapper[pattern[i]] = sHolder[i];
            } else {
                if(pairMapper[pattern[i]] != sHolder[i]){
                    return false;
                }
            }
        }

        //map strings to the characters
        for(int i = 0; i<sHolder.size(); i++){
            if(pairMapper2.find(sHolder[i]) == pairMapper2.end()){
                pairMapper2[sHolder[i]] = pattern[i];
            } else {
                if(pairMapper2[sHolder[i]] != pattern[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

