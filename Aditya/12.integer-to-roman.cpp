/*
Accepted
3999/3999 cases passed (8 ms)
Your runtime beats 54.99 % of cpp submissions
Your memory usage beats 60.29 % of cpp submissions (6 MB)
*/
/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) {
        if (num < 1 || num > 3999) return "";
	
        string ans = "";
	
	string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	
	int i = 0;
            //iterate until the number becomes zero, NO NEED to go until the last element in roman array
	while (num >0) {
		while ( num >= values[i]) {
			num -= values[i];
            ans+=roman[i];
		}
		i++;
	}
	return ans;
    }
};
// @lc code=end

