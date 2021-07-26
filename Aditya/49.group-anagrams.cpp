/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.size() == 0) return ans;

        unordered_map<string, vector<string>> map;
        for(auto str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            map[key].push_back(str);
        }

        for(auto it = map.begin(); it != map.end(); it++) {
            ans.push_back(it->second);
        }

        return ans;
    }
};
// @lc code=end

