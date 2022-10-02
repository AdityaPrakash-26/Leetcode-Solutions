/*
Accepted
115/115 cases passed (28 ms)
Your runtime beats 92.5 % of cpp submissions
Your memory usage beats 78.49 % of cpp submissions (19.6 MB)
*/

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
            //same strings will have the same keys
            //and hence will be grouped together
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

