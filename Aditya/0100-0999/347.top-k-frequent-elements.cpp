/*
Accepted
21/21 cases passed (15 ms)
Your runtime beats 71.72 % of cpp submissions
Your memory usage beats 89.66 % of cpp submissions (13.6 MB)
*/

/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        priority_queue<pair<int, int>> maxHeap;

        for(auto& pair: hash) {
            maxHeap.emplace(pair.second, pair.first);
        
        }
        while(k--){
            v.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return v;
    }
};
// @lc code=end

