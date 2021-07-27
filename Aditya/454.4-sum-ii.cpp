/*
 * @lc app=leetcode id=454 lang=cpp
 *
 * [454] 4Sum II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& p, vector<int>& q, vector<int>& r, vector<int>& s) {
        unordered_map<int, int> hash;
        int n = p.size();
        int ans = 0;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                // Increment the hashtable at the sum of the pair
                hash[p[i] + q[j]]++;
            }
        }
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                // Check if the negative of curr sum of the pair exists in the hash table. Then they will add upto zero. 
                // i.e hash[p[w] + q[x]] + hash[r[y] + s[z]] == 0.
                // But we dont want zero. We want no. of two touples. Hence we store the value in hashtable in ans. If it is present in hashtable it will get stored in ans, else it will get neglected cosidering it as a zero.
                ans = ans + hash[-(r[i] + s[j])];
            }
        }
        
        return ans;
        
    }
};
// @lc code=end

