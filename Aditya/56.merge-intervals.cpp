/*
Accepted
168/168 cases passed (16 ms)
Your runtime beats 88.84 % of cpp submissions
Your memory usage beats 94.91 % of cpp submissions (14.1 MB)
*/

/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 1){
            return intervals;
        }

        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        
        int j = 0;
        for(int i = 0; i < intervals.size(); i++){
            if(merged[j][1] >= intervals[i][0]){ // if ending of current comes after the beginning of the next one
				if(merged[j][1] < intervals[i][1]){ // and the ending of current is before the end of the next one
					merged[j][1] = intervals[i][1]; // extend the ending of current to the ending of next
				}
			} else { // intervals don't overlap, so simply add it
				merged.push_back(intervals[i]);
				j++;
			}
		}
		return merged;
    }
};
// @lc code=end

