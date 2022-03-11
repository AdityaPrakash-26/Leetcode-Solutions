/*
Accepted
100/100 cases passed (7 ms)
Your runtime beats 74.95 % of cpp submissions
Your memory usage beats 55.8 % of cpp submissions (10.2 MB)
*/

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

