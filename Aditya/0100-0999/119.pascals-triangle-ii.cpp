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
        vector<int> row(rowIndex+1, 0);
        row[0] = 1;
        for(int i=1; i<rowIndex+1; i++){
            for(int j=i; j>=1; j--){
                row[j] += row[j-1];
            }
        }
        return row;
    }
};
// @lc code=end

