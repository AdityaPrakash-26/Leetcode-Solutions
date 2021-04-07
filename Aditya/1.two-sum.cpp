#include <iostream>
#include <vector>
using namespace std;

/*
Accepted
53/53 cases passed (8 ms)
Your runtime beats 61.14 % of cpp submissions
Your memory usage beats 79.76 % of cpp submissions (8.8 MB)
*/

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size(); i++){
            int first = nums[i];
            int second = target-nums[i];
            for(int j = i+1; j<nums.size(); j++){
                if(nums[j]==second){
                    vector<int> ans;
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                } else {
                    //do nothing
                }
            }
        }
        vector<int> wrongAnswer = {-1};
        return wrongAnswer;
    }
};
// @lc code=end

