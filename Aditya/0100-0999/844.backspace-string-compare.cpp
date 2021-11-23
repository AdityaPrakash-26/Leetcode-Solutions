/*
Accepted
113/113 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 24.29 % of cpp submissions (6.4 MB)
*/

/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1;
        stack<char> stk2;

        for(int i = 0; i<s.size(); i++){
            if(stk1.empty() && s[i] == '#'){
                continue;
            }
            if(s[i] == '#'){
                stk1.pop();
            } else {
                stk1.push(s[i]);
            }
        }
        for(int i = 0; i<t.size(); i++){
            if(stk2.empty() && t[i] == '#'){
                continue;
            }
            if(t[i] == '#'){
                stk2.pop();
            } else {
                stk2.push(t[i]);
            }
        }
        return stk1 == stk2;
    }
};
// @lc code=end

