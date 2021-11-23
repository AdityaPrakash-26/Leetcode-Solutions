/*
Accepted
32/32 cases passed (12 ms)
Your runtime beats 79.6 % of cpp submissions
Your memory usage beats 5.63 % of cpp submissions (15.9 MB)
*/

/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        vector<string> bucket(s.size()+1, "");
        string res;
        
        //count frequency of each character
        for(char c:s) freq[c]++;
        //put character into frequency bucket
        for(auto& it:freq) {
            int n = it.second;
            char c = it.first;
            // the following line ensures that the character with a higher
            // frequency will be at the larger index. Hence the array will be
            // sorted in ascending order. We can then just iterate from the end
            // to get the character with the largest freq.
            bucket[n].append(n, c); //append c at n-th position
        }
        //form descending sorted string
        for(int i=s.size(); i>0; i--) {
            if(!bucket[i].empty())
                res.append(bucket[i]);
        }
        return res;
    }
};
// @lc code=end

