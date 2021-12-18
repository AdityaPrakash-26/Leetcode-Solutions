/*
Accepted
84/84 cases passed (3 ms)
Your runtime beats 53.09 % of cpp submissions
Your memory usage beats 5.67 % of cpp submissions (8.3 MB)
*/

/*
 * @lc app=leetcode id=902 lang=cpp
 *
 * [902] Numbers At Most N Given Digit Set
 */

// @lc code=start
class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& D, int N) {
        string NS = to_string(N);
        int digit = NS.size(), dsize = D.size(), rtn = 0;
        
        for (int i = 1 ; i < digit ; ++i)
            rtn += pow(dsize, i);
        
        for (int i = 0 ; i < digit ; ++i) {
            bool hasSameNum = false;
            for (string &d : D) {
                if (d[0] < NS[i]) 
                    rtn += pow(dsize, digit - i - 1);
                else if (d[0] == NS[i]) 
                    hasSameNum = true;
            }
            if (!hasSameNum) return rtn;
        }               
        return rtn+1;
    }
};
// @lc code=end

