/*
Accepted
34/34 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 80.78 % of cpp submissions (6.4 MB)
*/

/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(rowIndex+1);
        long temp = 1;
        v[0] = v[rowIndex] = 1;    // first and last element of the rowIndex-th row
        for(int i = 1, up = rowIndex, down = 1; i < rowIndex; i++, up--, down++){
            temp = temp*up / down;
            v[i] = temp;
        }
        return v;
    }
};
// @lc code=end

