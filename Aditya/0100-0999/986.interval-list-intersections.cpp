/*
Accepted
85/85 cases passed (51 ms)
Your runtime beats 18.58 % of cpp submissions
Your memory usage beats 91.28 % of cpp submissions (18.6 MB)
*/

/*
 * @lc app=leetcode id=986 lang=cpp
 *
 * [986] Interval List Intersections
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n = firstList.size();
        int m = secondList.size();
        int i=0 , j=0;
        
        vector<vector<int>> ans;
        
        while(i<n and j<m){
            if(firstList[i][1] >= secondList[j][0] and firstList[i][0] <= secondList[j][1]){
                int low = max(firstList[i][0] , secondList[j][0]);
                int hig = min(firstList[i][1] , secondList[j][1]);
                ans.push_back({low , hig});
            }
            firstList[i][1] < secondList[j][1] ? i++ : j++; // increase the smaller number
        }
        return ans;
    }
};
// @lc code=end

