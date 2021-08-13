/*
Accepted
3999/3999 cases passed (8 ms)
Your runtime beats 70.08 % of cpp submissions
Your memory usage beats 91.68 % of cpp submissions (5.9 MB)
*/

/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        if (s.empty()) return 0;
    
        int roman[24] = {};
        roman['I' - 'A'] = 1;
        roman['V' - 'A'] = 5;
        roman['X' - 'A'] = 10;
        roman['L' - 'A'] = 50;
        roman['C' - 'A'] = 100;
        roman['D' - 'A'] = 500;
        roman['M' - 'A'] = 1000;
        
        int sum = 0;
        int right = roman[s.front() - 'A'];
        for (int i = 1; i < s.size(); ++i) {
            int curr = right;
            right = roman[s[i] - 'A'];
            if (right > curr) 
                sum -= curr;
            else 
                sum += curr;
        }
        
        return sum + right;
    }
};
// @lc code=end

