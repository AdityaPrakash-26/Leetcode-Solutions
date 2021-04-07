/*
Accepted
2094/2094 cases passed (32 ms)
Your runtime beats 50.53 % of cpp submissions
Your memory usage beats 25.12 % of cpp submissions (89.7 MB)
*/

#include<iostream>
#include<vector>
using namespace std;


/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<double> nums3(n+m);

        int i=0,j=0,k=0;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                nums3[k] = nums1[i];
                i++;
                k++;
            } else {
                nums3[k] = nums2[j];
                j++;
                k++;
            }
        }

        if(j>=nums2.size()){
            for(;i<nums1.size(); i++,k++){
                nums3[k] = nums1[i];
            }
        } else {
            for(;j<nums2.size(); j++,k++){
                nums3[k] = nums2[j];
            }
        }

        if((n+m)%2 == 0){
            double ans = (nums3[(n+m)/2] + nums3[(n+m)/2 - 1])/2;
            return ans;
        } else {
            double ans = nums3[(n+m)/2];
            return ans;
        }
    }
};
// @lc code=end

