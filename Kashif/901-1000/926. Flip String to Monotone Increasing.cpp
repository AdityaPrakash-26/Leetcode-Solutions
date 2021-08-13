/**
 * @file 485.Max_Consecutive_Ones.cpp
 * @author Kashif Raza
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * Your runtime beats 23.38 % of cpp submissions.
 * Your memory usage beats 22.51 % of cpp submissions.
 * @version 0.1
 * 
 */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int minFlipsMonoIncr(string s) {
    int n = s.size();
    int flipCount = 0;
    int oneCount = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            if(oneCount == 0) continue;
            flipCount++;}
        else oneCount++;
            if(oneCount < flipCount) flipCount = oneCount;
    }
    return flipCount;
} 