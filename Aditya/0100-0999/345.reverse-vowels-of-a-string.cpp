/*
Accepted
480/480 cases passed (10 ms)
Your runtime beats 26.21 % of cpp submissions
Your memory usage beats 5.29 % of cpp submissions (9 MB)
*/

/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        } else {
            return false;
        }
    }

    string reverseVowels(string s) {
        vector<pair<char, int> > idxOfVowels;

        for(int i = 0; i<s.size(); i++){
            if(isVowel(s[i])){
                idxOfVowels.push_back({s[i], i});
            }
        }

        int leftIdx = 0; 
        int rightIdx = idxOfVowels.size()-1;

        while(leftIdx<rightIdx){
            swap(idxOfVowels[leftIdx].second, idxOfVowels[rightIdx].second);
            leftIdx++;
            rightIdx--;
        }

        for(int i = 0; i<idxOfVowels.size(); i++){
            s[idxOfVowels[i].second] = idxOfVowels[i].first;
        }

        return s;
    }
};
// @lc code=end

