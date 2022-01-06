/*
Accepted
58/58 cases passed (8 ms)
Your runtime beats 95.97 % of cpp submissions
Your memory usage beats 60.37 % of cpp submissions (10.2 MB)
*/

/*
 * @lc app=leetcode id=1094 lang=cpp
 *
 * [1094] Car Pooling
 */

// @lc code=start
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int, int>> v;
        
        for(int i = 0; i < trips.size(); i++){
            v.push_back({trips[i][1], trips[i][0]}); // picking up passengers
            v.push_back({trips[i][2], -trips[i][0]}); // dropping them off
        }
        
        sort(v.begin(), v.end());
        
        int filled = 0;
        
        for(int i = 0; i < v.size(); i++){
            filled += v[i].second;
            if(filled > capacity) return false;
        }
        return true;
    }
};
// @lc code=end

