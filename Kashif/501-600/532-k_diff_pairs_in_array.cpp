#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       unordered_map<int, int> map;
        for(auto num:nums)
            map[num]++;
        
        int countPairs = 0;
        if (k > 0) {
            for(auto a:map)
                if (map.find(a.first+k) != map.end()) 
                    countPairs++;
        }
        
        else {
            for(auto a:map)
                if (a.second > 1)
                    countPairs++;
        }
        
        return countPairs;
       }
};