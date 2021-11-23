/*
Accepted
47/47 cases passed (152 ms)
Your runtime beats 61.8 % of cpp submissions
Your memory usage beats 9.23 % of cpp submissions (92.9 MB)
*/

/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> daysTillWarmerTemp(size, 0);
        stack<pair<int, int> > stk;

        for(int i = 0; i<size; i++){
            if(stk.empty()){
                stk.push({temperatures[i], i});
            } else {
                while(!stk.empty() && temperatures[i] > stk.top().first){
                    daysTillWarmerTemp[stk.top().second] = i - stk.top().second;
                    stk.pop();
                }
                stk.push({temperatures[i], i});
            }
        }
        return daysTillWarmerTemp;
    }
};
// @lc code=end

