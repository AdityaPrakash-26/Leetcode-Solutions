/*
Accepted
102/102 cases passed (192 ms)
Your runtime beats 16.93 % of cpp submissions
Your memory usage beats 74.07 % of cpp submissions (58 MB)
*/

/*
 * @lc app=leetcode id=954 lang=cpp
 *
 * [954] Array of Doubled Pairs
 */

// @lc code=start
class Solution {
public:
    static bool compare(int a,int b){   //for negative numbers
        // normally, sort would have sorted the numbers
        // -2, 1, -4, 3  as -4, -2, 1, 3. However, with
        // this, our array will be 1, -2, 3, -4.
        return abs(a) < abs(b); 
    }

    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        unordered_map<int,int> hash;
        
        for(int i = 0; i<arr.size(); i++){
            hash[arr[i]]++;
        }

        for(int i = 0; i<arr.size(); i++){
            if(hash[arr[i]] == 0){
                continue;   //element has already been considered
            }
            if(hash[2*arr[i]] == 0){
                return false;
            } else {
                hash[2*arr[i]]--;
                hash[arr[i]]--;
            }
        }
        return true;
    }
};
// @lc code=end

