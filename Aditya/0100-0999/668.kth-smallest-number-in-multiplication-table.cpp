/*
 * @lc app=leetcode id=668 lang=cpp
 *
 * [668] Kth Smallest Number in Multiplication Table
 */

// @lc code=start
class Solution {
public:
    bool kSmaller(int n, int m, int num, int k) {
        int c = 0;
        for (int i = 1; i <= m; i++)
            c += min(n, num/i);
        
        return c >= k;
    }
    
    int findKthNumber(int m, int n, int k) {
        int lo = 0, hi = m*n, mid, res;
        
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            
            if (kSmaller(n, m, mid, k)) hi = mid;
            else lo = mid + 1;
        }
        
        return lo;
    }
};
// @lc code=end

