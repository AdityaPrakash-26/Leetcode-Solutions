/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        stack<int> stk;
        unordered_map<int, int> mp;

        for(int i = 0; i<nums2.size(); i++) {
            if(stk.empty()){
                stk.push(nums2[i]);
            } else {
                while(!stk.empty() && nums2[i] > stk.top()){
                    mp[stk.top()] = nums2[i]; //mapping the next greater element
                    stk.pop();
                }
                // either the stack is empty, or the current element in nums2 is
                // less than the top of the stack, in which case we cannot map it
                // hence we push it
                stk.push(nums2[i]); 
            }
        }

        //the remaining elements do not have a next greater element. Hence, we map
        //them to -1
        while(!stk.empty()){
            mp[stk.top()] = -1;
            stk.pop();
        }

        for(int i = 0; i<nums1.size(); i++){
            res.push_back(mp[nums1[i]]);
        }

        return res;

    }
};
// @lc code=end

