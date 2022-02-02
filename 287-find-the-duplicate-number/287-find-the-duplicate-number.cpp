class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         O(nlogn) time & O(1) space
        sort(nums.begin(), nums.end());
        int checkForDup = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(checkForDup == nums[i]){
                return checkForDup;
            }else{
                checkForDup = nums[i];
            }
        }
        return checkForDup;
    }
};