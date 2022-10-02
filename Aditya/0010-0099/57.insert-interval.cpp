/*
Accepted
156/156 cases passed (8 ms)
Your runtime beats 98.61 % of cpp submissions
Your memory usage beats 41.36 % of cpp submissions (17.2 MB)
*/

/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        for(int i = 0; i<intervals.size(); i++){
            // the new interval is after the range of other interval, so we can
            // leave the current interval baecause the new one does not overlap
            // with it
            if (intervals[i][1] < newInterval[0]){
                res.push_back(intervals[i]);
            }
			// the new interval's range is before the other, so we can add the
			// new interval and update it to the current one
            else if (intervals[i][0] > newInterval[1]){
                res.push_back(newInterval);
                newInterval = intervals[i]; 
            }
			// the new interval is in the range of the other interval, we have
			// an overlap, so we must choose the min for start and max for end
			// of interval 
            else if(intervals[i][1] >= newInterval[0] || intervals[i][0] <= newInterval[1]){
                newInterval[0] = min(intervals[i][0], newInterval[0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
        }
        res.push_back(newInterval);
        return res;
    }
};
// @lc code=end

