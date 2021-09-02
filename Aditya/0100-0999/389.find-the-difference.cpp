/*
Accepted
54/54 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 66.34 % of cpp submissions (6.6 MB)
*/

/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumOfS = 0;
        int sumOfT = 0;

        for(int i = 0; i<s.size(); i++){
            sumOfS += s[i];
        }

        for(int i = 0; i<t.size(); i++){
            sumOfT += t[i];
        }

        return sumOfT - sumOfS;
    }
};
// @lc code=end

