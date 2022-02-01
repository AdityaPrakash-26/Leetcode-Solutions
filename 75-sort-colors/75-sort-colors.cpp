class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countZero = 0, countOnes = 0, countTwo = 0;
        for(int idx = 0; idx < nums.size(); idx++){
            if(nums[idx] == 0){
                countZero++;
            }else if(nums[idx] == 1){
                countOnes++;
            }else{
                countTwo++;
            }
        }
        int ctr = 0;
        for(int i = 0; i < countZero; i++){
            nums[ctr] = 0;
            ctr++;
        }
        for(int i = 0; i < countOnes; i++){
            nums[ctr] = 1;
            ctr++;
        }
        for(int i = 0; i < countTwo; i++){
            nums[ctr] = 2;
            ctr++;
        }
        
    }
};