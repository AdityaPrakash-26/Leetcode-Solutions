/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int size = nums.size();

        vector<vector<int>> output;

        for(int i = 0; i<size-3; i++){
            for(int j = i+1; j<size-2; j++){
                int k = j+1;
                int l = size-1;

                while(k<l){
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];

                    if(sum==target){
                        int xp = k;
                        int yp = l;
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[l]);

                        output.push_back(temp);
                        while (k < l && nums[k] == nums[xp]) 
                            k++;
                        while (k < l && nums[l] == nums[yp]) 
                            l--;
                    } else if(sum>target){
                        l--;
                    } else {
                        k++;
                    }

                    while (j + 1 < nums.size() && nums[j + 1] == nums[j])  //for ensuring we don't get any duplicates
                        j++;
                    while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
                        i++;

                }
            }
        }
        return output;
    }
};
// @lc code=end

