/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> hash;
        
        for(int i = 0; i < arr.size(); i++){
            hash[arr[i]]++;
        }
        int maxNum = -1;
        for(auto it: hash){
            if(it.first == it.second){
                maxNum = max(maxNum, it.first);
            }
        }
        return maxNum;
    }
};
// @lc code=end

