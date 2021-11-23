/*
Accepted
18/18 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 94.94 % of cpp submissions (5.7 MB)
*/

/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber > 0){
            ans += char('A' + (columnNumber-1)%26); //new characters are added at the end
            columnNumber = (columnNumber-1)/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

