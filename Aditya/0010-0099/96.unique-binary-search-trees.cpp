/*
Accepted
19/19 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 36.22 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=96 lang=cpp
 *
 * [96] Unique Binary Search Trees
 */

// @lc code=start
class Solution {
public:
    int numTrees(int n) {
        vector<int>result(n+1,0); //Initializing vector with 0

        result[1]=result[0]=1;

        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                result[i] += result[j] * result[i-j-1]; //Calculating C(i) to use for C(i+1) and storing it in result
            }
        }
        return result[n]; //return answer
    }
};
// @lc code=end

