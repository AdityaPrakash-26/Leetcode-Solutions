/**
 * @file 509.FibonacciNumber.cpp
 * @author Kashif Raza
 * Your runtime beats 87.19 % of cpp submissions.
 * Your memory usage beats 83.70 % of cpp submissions.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * @version 0.1
 */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

 int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0, j = people.size() - 1;
        int ret = 0;
        while (i <= j) {
            if (people[j] + people[i] <= limit) {
                i ++, j--;
            } else {
                j--;
            }
            ret ++;
        }
        return ret;

    }