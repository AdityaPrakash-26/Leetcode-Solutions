/*
Accepted
55/55 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 73.81 % of cpp submissions (10.1 MB)
*/

/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    // HASHMAP TC: O(M + N) SC: O(N) (or min of O(M), O(N)) with some
    // optimizations
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> hash;
        vector <int> intsec;
        
        for (int i: nums1) {
            hash[i]++;
        }
        
        for (auto item: nums2) {
            if (--hash[item] >= 0) {
                intsec.push_back(item);
            }
        }
        
        return intsec;
    }

    //SORTING TC: O(N log N + M log M); SC: O(1)
    vector<int> intersectSort(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int numsOneIdx = 0;
        int numsTwoIdx = 0;

        while(numsOneIdx < nums1.size() && numsTwoIdx < nums2.size()){
            if(nums1[numsOneIdx] == nums2[numsTwoIdx]){
                res.push_back(nums1[numsOneIdx]);
                numsOneIdx++;
                numsTwoIdx++;
            } else if (nums1[numsOneIdx] > nums2[numsTwoIdx]){
                numsTwoIdx++;
            } else {
                numsOneIdx++;
            }
        }

        return res;
    }
};
// @lc code=end

