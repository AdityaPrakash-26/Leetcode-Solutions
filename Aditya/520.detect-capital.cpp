/*
Accepted
550/550 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 19 % of cpp submissions (6.1 MB)
*/

/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() == 0){
            return false;
        }

        bool isFirstWordCapital = false;
        bool isAnyOtherWordCapital = false;
        bool isAnyOtherWordSmall = false;

        if(isupper(word[0])){
            isFirstWordCapital = true;
        }

        for(int i = 1; i < word.size(); i++){
            if(isupper(word[i])){
                isAnyOtherWordCapital = true;
            }
            if(!isupper(word[i])){
                isAnyOtherWordSmall = true;
            }
            if(isAnyOtherWordCapital && !isFirstWordCapital){
                return false;
            }
            if(isAnyOtherWordCapital && isAnyOtherWordSmall){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

