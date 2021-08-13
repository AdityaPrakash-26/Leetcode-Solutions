class Solution {
public:
    /*
    * We will be using unordered map storing the vector nums as keys 
    * and its index as its value (i mean value of the map)
    * then we will iterate through the vector nums insert the key value pair 
    * till we reach the sum of target!
    * unordered_map
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0, num=0, val;
        int size = sizeof(nums);
        unordered_map<int, int> m;
        for(i=0; i<size; i++){
            num = nums[i];
            val = target - num;
            auto t = m.find(val);
            if(t!=m.end()){
                return {t->second, i};
            }
            m[num] = i;
        }
        return {}; //return empty vector if pair not found
    }
};
