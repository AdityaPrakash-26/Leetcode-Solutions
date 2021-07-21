/*
Accepted
53/53 cases passed (124 ms)
Your runtime beats 5.48 % of cpp submissions
Your memory usage beats 5.16 % of cpp submissions (67.8 MB)
*/

/*
 * @lc app=leetcode id=848 lang=cpp
 *
 * [848] Shifting Letters
 */

// @lc code=start
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        unsigned long long int prevSum = 0;
        for(int i = s.size()-1; i>=0; i--){
            s[i] = char((int(s[i] - 'a') + shifts[i] + prevSum)%26 + 'a');
            prevSum += shifts[i];
        }
        return s;
    }
};
// @lc code=end

