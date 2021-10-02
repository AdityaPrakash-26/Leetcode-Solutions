/*
* You are here! Your runtime beats 21.57 % of cpp submissions.
*You are here! Your memory usage beats 91.01 % of cpp submissions.
*/

class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right  = nums.size()  - 1;
    
        while(left < right){
            int mid = left  + (right - left)/2;
            if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }

        if(nums[left] < target){
            return left + 1; 
        }
        
        return left;
    }
    
};
