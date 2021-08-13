/**
 * @file 485.Max_Consecutive_Ones.cpp
 * @author Kashif Raza
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * Your runtime beats 15.37 % of cpp submissions
 * Your memory usage beats 67.72 % of cpp submissions.
 * @version 0.1
 * 
 */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
      int cnt = 0;//SC: O(1)
        int maxCnt = 0;//SC: O(1)
        for (int i = 0; i < nums.size(); i++) {//TC: O(n)
            if (nums[i] == 1)
                cnt++;
            if (nums[i] == 0 || i == nums.size()-1) {
                maxCnt = max(cnt, maxCnt);//TC: O(1)
                cnt = 0;
            }
        }
        return maxCnt;
    }