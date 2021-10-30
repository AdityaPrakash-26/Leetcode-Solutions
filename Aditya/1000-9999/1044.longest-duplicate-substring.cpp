/*
Accepted
66/66 cases passed (928 ms)
Your runtime beats 76.51 % of cpp submissions
Your memory usage beats 98.99 % of cpp submissions (12.7 MB)
*/

/*
 * @lc app=leetcode id=1044 lang=cpp
 *
 * [1044] Longest Duplicate Substring
 */

// @lc code=start
class Solution {
public:
    string longestDupSubstring(string s) {
        // map to store the indices of each character
        unordered_map<char, vector<int>> hash;
        int n = s.length();
        
        for(int i=0; i<n; i++)
            hash[s[i]].push_back(i);
        
        int Max = 0, index = -1;
        
        for(int i=0; i<n; i++)
        {
            char f = s[i];
            hash[f].erase(hash[f].begin());
            
			// erasing the current index and checking longest substring possible
            for(int it : hash[f])
            {
                int j = 0;
                
                while(i+j < n and it+j < n and s[i+j] == s[it+j])
                    j++;
                
                if(j > Max)
                {
                    Max = j;
                    index = i;
                }
                
				// this is required when we achieved the longest substring possible 
                if(Max == n-i-1)
                    return s.substr(index, Max);
            }
        }
        
        if(Max == 0)
            return "";
        
        else
            return s.substr(index, Max);
    }
};
// @lc code=end

