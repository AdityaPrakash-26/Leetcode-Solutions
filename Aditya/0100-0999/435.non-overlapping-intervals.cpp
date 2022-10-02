/*
Accepted
58/58 cases passed (424 ms)
Your runtime beats 57.27 % of cpp submissions
Your memory usage beats 83.01 % of cpp submissions (89.8 MB)
*/

/*
 * @lc app=leetcode id=435 lang=cpp
 *
 * [435] Non-overlapping Intervals
 */

// @lc code=start
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //first sort the intervals
        sort(intervals.begin(),intervals.end());
        
        //find the overlapping intervals and greeedily remove a interval
        int count = 0;
        int i = 0;
        int j = 1;
        //we use to pointers to compare two intervals
        int n = intervals.size();
        while(j < n){
            //compare i and j
            if(intervals[i][1] <= intervals[j][0]){
                //if i and j intervals are not overlapping
                i = j;
                j++;
            } else if(intervals[i][1] >= intervals[j][1]) {
                //if j interval is completely overlapped in i
                //and i interval size is greater than j
                //it is better to reemove i  interval
                count += 1;
                i = j;
                j++;
            } else if(intervals[i][1] > intervals[j][0]) {
                //if j interval is overlapping only some portion of i
                //it is better to remove j
                count += 1;
                j++;
            }
        }
        return count;
    }
};
// @lc code=end

