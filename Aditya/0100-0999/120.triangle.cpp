/*
Accepted
44/44 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 30.75 % of cpp submissions (8.6 MB)
*/

/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:
/*
Idx:0 1 2 3 

    1
    2 3
    4 5 6
    7 8 9 10
*/

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> minlen = triangle.back();
        for (int layer = n-2; layer >= 0; layer--){ // For each layer
            for (int i = 0; i <= layer; i++){ // Check its every 'node'
                // Find the lesser of its two children, and sum the current value in the triangle with it.
                minlen[i] = min(minlen[i], minlen[i+1]) + triangle[layer][i]; 
            }
        }
        return minlen[0];   // the top most element will have index zero
    }
};
// @lc code=end

