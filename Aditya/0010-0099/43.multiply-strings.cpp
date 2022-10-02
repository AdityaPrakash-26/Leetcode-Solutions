/*
Accepted
311/311 cases passed (7 ms)
Your runtime beats 63.41 % of cpp submissions
Your memory usage beats 67.55 % of cpp submissions (6.7 MB)
*/

/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution {
public:
    string multiply(string num1, string num2) {
        //edge case
        if(num1 == "0" || num2 == "0") {
            return "0";
        }

        // this will be the max number of digits
        vector<int> num(num1.size() + num2.size(), 0);
        
        // multiply one digit at a time
        for (int i = num1.size() - 1; i >= 0; i--) {
            for (int j = num2.size() - 1; j >= 0; j--) {
                num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');    //multiply the nums
                num[i + j] += num[i + j + 1] / 10;  // add the carry
                num[i + j + 1] %= 10; // remove the carry from the current index
            }
        }
        
        // skip leading zeroes
        int i = 0;
        while (i < num.size() && num[i] == 0){
            i++;
        }

        // convert to string and return
        string res = "";
        while (i < num.size()){ 
            res.push_back(num[i++] + '0');
        }
        return res;
    }
};
// @lc code=end

