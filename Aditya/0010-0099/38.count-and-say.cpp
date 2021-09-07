/*
Accepted
30/30 cases passed (8 ms)
Your runtime beats 71.67 % of cpp submissions
Your memory usage beats 99.01 % of cpp submissions (6.3 MB)
*/

/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string res = "1", tmp;
        n--;
        
        while (n) {
            tmp = "";
            
			// Count the number of contiguous same character in previous string to build current string
            for (int i = 0; i < res.size(); i++) {
                int count = 1;
                
                while (i + 1 < res.size() && res[i] == res[i+1]) {
                    count++; i++;
                }
                
                tmp += to_string(count) + res[i];
            }
            
            res = tmp;
            n--;
        }
        
        return res;
    }
};
// @lc code=end

