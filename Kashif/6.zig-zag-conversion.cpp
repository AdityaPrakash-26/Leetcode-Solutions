/*
    Accepted
    1157/1157 cases passed (8 ms)
    Your runtime beats 86.7 % of cpp submissions
    Your memory usage beats 84.37 % of cpp submissions (8.2 MB)
*/

/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 */

// @lc code=start
#include <string>
class Solution {
public:
    string convert(string s, int numRows) {
       /*
          If number of Rows to show == 1
          then the zig zag patterm would be just same
          as the original string       
       */   
       if (numRows == 1) {
            return s;
        }
        const int jump = 2 * numRows - 2;
        string zigZag;
        //starting from i=0, j=0 
        for (int i = 0; i < numRows; ++i) {
            for (int j = i; j < s.length(); j = j + jump) {
                zigZag.push_back(s[j]);

                if (0 < i && i < numRows - 1 && j + jump - 2 * i < s.length()) {
                    zigZag.push_back(s[j + jump - 2 * i]);
                }
            }
        }
        return zigZag; 
    }
};
// @lc code=end

