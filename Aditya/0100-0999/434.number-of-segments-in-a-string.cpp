/*
Accepted
27/27 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 58.35 % of cpp submissions (6.2 MB)
*/

/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        int res = 0;
        s.push_back(' ');   //sentinel value
        for(int i = 1; i < s.size(); i++){
            if(s[i] == ' ' && s[i-1] != ' ') {
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

