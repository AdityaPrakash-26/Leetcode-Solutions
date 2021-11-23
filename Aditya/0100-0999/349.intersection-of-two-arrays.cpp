/*
Accepted
55/55 cases passed (3 ms)
Your runtime beats 91.73 % of cpp submissions
Your memory usage beats 79.17 % of cpp submissions (10.1 MB)
*/

/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> res;

        // BRUTE FORCE APPROACH
        // for(int i = 0; i < nums1.size(); i++){
        //     for(int j = 0; j<nums2.size(); j++){
        //         if(nums1[i] == nums2[j]){
        //             res.insert(nums1[i]);
        //         }
        //     }
        // }
        // vector<int> ans(res.begin(), res.end());
        // return ans;

        // SORTING
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int numsOneIdx = 0;
        int numsTwoIdx = 0;

        while(numsOneIdx < nums1.size() && numsTwoIdx < nums2.size()){
            if(nums1[numsOneIdx] == nums2[numsTwoIdx]){
                res.insert(nums1[numsOneIdx]);
                numsOneIdx++;
                numsTwoIdx++;
            } else if (nums1[numsOneIdx] > nums2[numsTwoIdx]){
                numsTwoIdx++;
            } else {
                numsOneIdx++;
            }
        }

        vector<int> ans(res.begin(), res.end());
        return ans;

        // ANOTHER APPROACH CAN BE TO CONVERT THEM BOTH INTO TWO SETS AND CHECK
        // WHETHER THE ELEMENTS OF THE SMALLER SET ARE CONTAINED IN THE LARGER
        // SET. THIS WILL TAKE O(N) TIME AND SPACE.
    }
};
// @lc code=end

