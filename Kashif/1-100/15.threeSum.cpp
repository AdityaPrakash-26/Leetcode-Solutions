 /*
   Runtime: 64 ms, faster than 82.02% of C++ online submissions for 3Sum.
   Memory Usage: 20.1 MB, less than 52.80% of C++ online submissions for 3Sum.
 
 */
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int lt = i+1, rt = nums.size()-1;
            while(lt<rt){
                int currSum = nums[i]+nums[lt]+nums[rt];
                if(currSum == 0){
                    ans.push_back({nums[i], nums[lt], nums[rt]});
                    rt--;
                    lt++;
                    while(rt>lt && nums[rt]==nums[rt+1]) {
                        rt--;}
                    while(rt>lt && nums[lt]==nums[lt-1]) {
                        lt++;}
                }else if(currSum<0){
                    lt++;
                }else if(currSum>0){
                    rt--;
                }
            }
        }
        return ans;
    }
