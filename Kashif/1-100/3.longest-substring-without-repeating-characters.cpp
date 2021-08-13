/*
Runtime: 40 ms (Beats 20.18% of cpp submissions)
Memoery usage: 8.3 MB (Beats 66.82% of cpp submissions)
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         Using Vectors to store the positions (index)
        vector<int> pos(256, -1);
        int start = 0;
        int maxV = numeric_limits<int>::min();
        for(int i = 0; i < s.size(); i++) {
            if(pos[s[i]] != -1) {
                maxV = max(maxV, i - start);
                start = pos[s[i]] + 1;
                i = pos[s[i]];
                pos.clear();
                pos.resize(256, -1);
                continue;
            }

            pos[s[i]] = i;
        }

        maxV = max(maxV, (int)s.size() - start);

        return maxV;
    }
};
