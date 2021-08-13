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
        // Keys are the array values and values are the associated array indices
        unordered_map<int, int> hash; // Use as a hash table, instead of creating one
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
            if (hash.count(target - nums[i])) { // If the partner of this value to reach the target sum has been saved already
            
                result.push_back(hash[target - nums[i]]); // Get index of other value
                result.push_back(i);
                return result;
            } else { // Pair has not yet been found, so save value to hash table
                hash[nums[i]] = i;
            }
        return result;
    }
};
// @lc code=end
