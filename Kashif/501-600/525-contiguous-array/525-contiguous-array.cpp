class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> hashMap;
        hashMap[0] = -1;
        int maxLength = 0, count = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == 0){
                count--;
            }else{
                count++;
            }
            if(hashMap.find(count) != hashMap.end()){
                maxLength = max(maxLength, i - hashMap[count]);
            }else{
                hashMap[count] = i;
            }
        }
        return maxLength;
    }
};