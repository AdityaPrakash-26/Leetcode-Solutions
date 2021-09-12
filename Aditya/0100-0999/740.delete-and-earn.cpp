/*
Accepted
47/47 cases passed (8 ms)
Your runtime beats 66.16 % of cpp submissions
Your memory usage beats 30.57 % of cpp submissions (11.5 MB)
*/

/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> freq(10001,0);
        int res = 0;
        for(auto a:nums){
            freq[a]++;
        }

        for(int i = 2; i < 10001; i++){
            freq[i] = max(freq[i-1], (i * freq[i]) + freq[i-2]);
            res = max(res, freq[i]);
        }
        return res;
    }
};
// @lc code=end

