/*
Accepted
61/61 cases passed (454 ms)
Your runtime beats 23.75 % of cpp submissions
Your memory usage beats 94.27 % of cpp submissions (131.7 MB)
*/

/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> ans;
        int n=nums.size();
        deque <int> q; //only indices are stored
        for(int i=0;i<n;i++){   
            while(!q.empty() && i-q.front()>=k){
                q.pop_front(); //only window size of k is allowed
            }
            
            while(!q.empty() && nums[q.back()]<nums[i]){
                q.pop_back();
            }

            q.push_back(i);

            if(i>=k-1) {
                ans.push_back(nums[q.front()]); //our max value in O(1)
            }
        }
        return ans;
    }
};
// @lc code=end

