/*
Accepted
21/21 cases passed (16 ms)
Your runtime beats 99.69 % of cpp submissions
Your memory usage beats 32.59 % of cpp submissions (17.6 MB)
*/

/* 
 * ALGORITHM
 * Give the largest cookie to the greediest child. For this, sort the
 * array and start iterating from the end.
 */

/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int count = 0;
        int gIdx = g.size() - 1;
        int sIdx = s.size() - 1;
        while(gIdx >= 0 && sIdx >= 0 ){
            if(g[gIdx] > s[sIdx]){
                gIdx--;
            } else {
                gIdx--;
                sIdx--;
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

