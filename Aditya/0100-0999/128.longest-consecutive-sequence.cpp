/*
Accepted
70/70 cases passed (76 ms)
Your runtime beats 69.31 % of cpp submissions
Your memory usage beats 30.21 % of cpp submissions (31 MB)
*/

/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> hash;

        for(int i = 0; i<nums.size(); i++){
            hash[nums[i]] = true;
        }

        int max_range = 0;

        for(int i = 0; i<nums.size(); i++){
            int count = 0;  // count of consecutive numbers
            int num = nums[i];  // current number
            int tempNum = num;  // copy of current number
            
            while (hash[tempNum] == true) {   //while a consecutive number exists
                hash[tempNum] = false;    //change that number to false, because we have traversed it
                tempNum++;  //increment tempNum, i.e. go to the next number
                count++;    //increment streak
            }
            
            tempNum = num-1;    //set tempNum to the previous number, i.e,, we will now check backwards.
            
            while (hash[tempNum] == true) {   //while a consecutive number exists(in backwards direction)
                hash[tempNum] = false;    //change that number to false, because we have traversed it
                tempNum--;  //decrement tempNum, i.e., go to the previous number
                count++;    //increment streak
            }
            
            max_range = max(max_range, count);
        }
        return max_range;
    }
};
// @lc code=end

