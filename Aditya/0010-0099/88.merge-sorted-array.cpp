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
        vector<int> numsTemp(m);
        for(int i = 0; i<m; i++){
            numsTemp[i] = nums1[i];
        }

        int i = 0;
        int j = 0;
        int k = 0;

        while(i<m && j<n){
            if(numsTemp[i] > nums2[j]){
                nums1[k] = nums2[j];
                k++;
                j++;
            } else {
                nums1[k] = numsTemp[i];
                k++;
                i++;
            }
        }

        while(i<m){
            nums1[k] = numsTemp[i];
            k++;
            i++;
        }

        while(j<n){
            nums1[k] = nums2[j];
            k++;
            j++;
        }

    }
};
// @lc code=end

