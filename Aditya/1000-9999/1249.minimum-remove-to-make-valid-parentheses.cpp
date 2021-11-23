/*
Accepted
62/62 cases passed (44 ms)
Your runtime beats 18.99 % of cpp submissions
Your memory usage beats 40.79 % of cpp submissions (11.9 MB)
*/

/*
 * @lc app=leetcode id=1249 lang=cpp
 *
 * [1249] Minimum Remove to Make Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char, int> > stk;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                stk.push({s[i], i});
            } else if(s[i] == ')'){
                if(stk.empty()){
                    stk.push({s[i], i});
                } else {
                    if(stk.top().first == '('){
                        stk.pop();
                    } else {
                        stk.push({s[i], i});
                    }
                }
            }
        }

        while(!stk.empty()){
            pair<char, int> topChar = stk.top();
            stk.pop();
            s[topChar.second] = '*';
        }

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '*'){
                s.erase(s.begin() + i);
                i--;
            }
        }
        return s;
    }
};
// @lc code=end

