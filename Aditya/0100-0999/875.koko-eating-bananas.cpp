/*
Accepted
119/119 cases passed (113 ms)
Your runtime beats 6.36 % of cpp submissions
Your memory usage beats 99.39 % of cpp submissions (18.6 MB)
*/

/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
public:
    int Calculate(vector<int>& nums,int k){
        int NumberOfHours=0;
        for(int i=0;i<nums.size();i++){
            NumberOfHours+=(nums[i]%k==0) ? nums[i]/k : (nums[i]/k)+1;
        }
        return NumberOfHours;
    }
    
    
    
    
    int minEatingSpeed(vector<int>& nums, int H) {
        int left=1;
        int right=1000000000;
        int ans=0;
        while(left<=right){
            int k=left+(right-left)/2;    
                
            int NumberOfHours = Calculate(nums,k);
            
            if(NumberOfHours>H){
                left=k+1;
            }
            else if(NumberOfHours<=H){
                ans=k;
                right=k-1;
            }
        }
        return ans;
        
    }
};
// @lc code=end

