/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int bit, carry = 0;
        int i=a.size()-1, j=b.size()-1; 

        while(i >= 0 || j >= 0) {
            bit = carry;
            if(i >= 0) {
                bit += a[i] - '0';
                i--;
            }
            if(j >= 0) {
                bit += b[j] - '0';
                j--; 
            }
            carry = bit / 2;
            bit = bit % 2;
            res = to_string(bit) + res;
        }
        if(carry) res = to_string(carry) + res;
        return res;
    }
};
// @lc code=end

