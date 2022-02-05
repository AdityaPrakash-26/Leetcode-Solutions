class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
//         Prefix Sum
        for(int i = 1; i < nums.size(); i++){
            res[i] = res[i - 1]*nums[i - 1];
        }
        int suffProd = 1;
        for(int i = res.size() - 1; i >= 0; --i){
            res[i] *= suffProd;
            suffProd *= nums[i];
        }
        return res;
    }
};