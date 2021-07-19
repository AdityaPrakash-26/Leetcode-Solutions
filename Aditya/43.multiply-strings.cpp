/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1 - "0";
        int n2 = num2 - "0";

        int ans = n1*n2;

        string res = "";
        res.append(ans);

        return res;
    }
};
// @lc code=end

