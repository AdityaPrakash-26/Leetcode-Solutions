class Solution {
public:
 
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
     
        map<int, int> hashMap;
        for(int idx1 : nums1){
            for(int idx2 : nums2){
               
                    hashMap[idx1+idx2]++;
                
            }
        }
        int tupleCounter = 0;
        for(int idx3 : nums3){
            for(int idx4: nums4){
                auto it = hashMap.find(0 - idx3 - idx4);
                if(it != hashMap.end()){
                    tupleCounter += it->second;
                }
            }
        }
    
        return tupleCounter;
   }
};