#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size(); i++){
            int first = nums[i];
            int second = target-nums[i];
            for(int j = i+1; j<nums.size(); j++){
                if(nums[j]==second){
                    vector<int> ans;
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                } else {
                    //do nothing
                }
            }
        }
        vector<int> wrongAnswer = {-1};
        return wrongAnswer;
    }
};
