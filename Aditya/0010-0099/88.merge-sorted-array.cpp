/*
Accepted
59/59 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 89.97 % of cpp submissions (8.9 MB)
*/

/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){    // fill the array from the right hand side
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            } else {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }

        // even if we finish iterating over i before j, we do not need a
        // "cleanup" loop for it, because those elements are already in nums1.
        while(j>=0){
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};
// @lc code=end

