/*
Accepted
34/34 cases passed (16 ms)
Your runtime beats 99.64 % of cpp submissions
Your memory usage beats 25.76 % of cpp submissions (23.2 MB)
*/

/*
 * @lc app=leetcode id=1010 lang=cpp
 *
 * [1010] Pairs of Songs With Total Durations Divisible by 60
 */

// @lc code=start
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> hash(60);    //initialize the hash map to 0
        int ans = 0;
        for(int i = 0; i<time.size(); i++){
            ans += hash[(60 - time[i] % 60) % 60];
            hash[time[i]%60]++;
        }
        return ans;
    }
};
// @lc code=end

