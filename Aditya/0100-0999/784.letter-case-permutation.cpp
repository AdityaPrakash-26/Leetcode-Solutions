/*
Accepted
63/63 cases passed (4 ms)
Your runtime beats 92.59 % of cpp submissions
Your memory usage beats 86.93 % of cpp submissions (9.5 MB)
*/

/*
 * @lc app=leetcode id=784 lang=cpp
 *
 * [784] Letter Case Permutation
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        backtrack(S, 0, ans);
        return ans;
    }
    
    void backtrack(string &s, int i, vector<string> &ans) {
        if (i == s.size()) {
            ans.push_back(s);
            return;
        }
        // save initial value
        char c = s[i];
        // path1: toggle lower/upper case
        s[i] = islower(c) ? toupper(c) : tolower(c);
        backtrack(s, i + 1, ans);
        // path2: reset back(do NOT go to this path if c is digit)
        if (isalpha(c)) {
            s[i] = c;   // revert the case toggle and backtrack again
            backtrack(s, i + 1, ans);
        }
    }
};
// @lc code=end

