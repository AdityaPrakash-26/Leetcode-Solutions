/*
Accepted
168/168 cases passed (25 ms)
Your runtime beats 33.34 % of cpp submissions
Your memory usage beats 57.11 % of cpp submissions (14.3 MB)
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
        sort(intervals.begin(), intervals.end());
		vector<vector<int>> res;
		int j = 0;
		res.push_back(intervals[0]);
		for(int i = 1; i < intervals.size(); i++){
			if(res[j][1] >= intervals[i][0]){   // if ending of current comes after the beginning of first
				if(res[j][1] < intervals[i][1]){    // extend the current interval
					res[j][1] = intervals[i][1];
				}
			}
			else{
				res.push_back(intervals[i]);
				j++;
			}
		}
		return res;
    }
};
// @lc code=end

