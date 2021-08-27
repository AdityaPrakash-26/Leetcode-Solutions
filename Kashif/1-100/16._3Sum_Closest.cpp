/**
*Runtime: 27 ms, faster than 16.61% of C++ online submissions for 3Sum Closest.
*Memory Usage: 9.9 MB, less than 62.67% of C++ online submissions for 3Sum Closest.
*@author = "Kashif Raza"
*
*
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int finalSum = nums[0] + nums[1] + nums[nums.size()-1];
         int checkMinDiff = INT_MAX, sum = 0;
        for(int i=0; i<nums.size()-2; i++){
            int j = i+1, k = nums.size()-1; 
            while(j<k){
                sum = (nums[i] + nums[j] + nums[k]);
                if(sum>target)
                   { k--;}
                else{
                    j++;
                }
                
                if(abs(sum - target) < abs(finalSum - target))
                    finalSum = sum;
            }
        }
        
        return finalSum;
    }
};
