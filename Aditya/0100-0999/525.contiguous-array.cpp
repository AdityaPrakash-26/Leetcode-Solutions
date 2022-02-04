/*
Accepted
564/564 cases passed (171 ms)
Your runtime beats 48.65 % of cpp submissions
Your memory usage beats 55.07 % of cpp submissions (83.8 MB)
*/

/*
 * @lc app=leetcode id=525 lang=cpp
 *
 * [525] Contiguous Array
 */

// @lc code=start
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
		int prefix_sum = 0;
		unordered_map<int,int> m;
		m[0] = -1; // will mark it as base case

		for(int i =0;i<nums.size();i++){
			if(nums[i] == 0){
				prefix_sum += -1;
			}else{
				prefix_sum += 1;
			}

			if(m.count(prefix_sum)){
				int len = i - m[prefix_sum];
				if(len > ans){
					ans = len;
				}
			}else{
				m[prefix_sum] = i;
			}

		}

		return ans;
    }
};
// @lc code=end

