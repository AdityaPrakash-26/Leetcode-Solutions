/*
Accepted
318/318 cases passed (48 ms)
Your runtime beats 97.81 % of cpp submissions
Your memory usage beats 62.03 % of cpp submissions (20.1 MB)
*/

/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> output;
        for(int i = 0; i<size-2; i++){
            int currNum = nums[i];
            int l = i+i;
            int r = size-1;
            while(l<r){
                int sum = currNum + nums[l] + nums[r];

                if(sum==0){
                    vector<int> temp;
                    temp.push_back(currNum);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);

                    output.push_back(temp);
                    l++;
                    r--;
                } else if(sum>0) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        output.erase( unique( output.begin(), output.end() ), output.end() );
        return output;
    }
};
// @lc code=end

