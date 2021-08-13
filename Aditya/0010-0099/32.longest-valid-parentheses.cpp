/*
Accepted
231/231 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 34.69 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=32 lang=cpp
 *
 * [32] Longest Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        int maxans = 0;
        stack<int> stack;
        stack.push(-1);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stack.push(i);
            } else {
                stack.pop();
                if (stack.empty()) {
                    stack.push(i);
                } else {
                    maxans = max(maxans, i - stack.top());
                }
            }
        }
        return maxans;
    }
};
// @lc code=end

