/**
 * @file 509.FibonacciNumber.cpp
 * @author Kashif Raza
 * Your runtime beats 100.00 % of cpp submissions.
 * Your memory usage beats 38.95 % of cpp submissions.
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * @version 0.1
 */
#include<iostream>
#include<string>
using namespace std;

int fib(int n) {
        int f[n+2];
        f[0] = 0;
        f[1] = 1;
        for(int i=2; i<=n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        
        return f[n];
    }
