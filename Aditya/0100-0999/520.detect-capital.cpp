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

        bool isFirstCharCapital = false;
        bool isAnyOtherCharCapital = false;
        bool isAnyOtherCharSmall = false;

        if(isupper(word[0])){
            isFirstCharCapital = true;
        }

        for(int i = 1; i < word.size(); i++){
            if(isupper(word[i])){
                isAnyOtherCharCapital = true;
            }
            if(!isupper(word[i])){
                isAnyOtherCharSmall = true;
            }
            if(isAnyOtherCharCapital && !isFirstCharCapital){
                return false;
            }
            if(isAnyOtherCharCapital && isAnyOtherCharSmall){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

