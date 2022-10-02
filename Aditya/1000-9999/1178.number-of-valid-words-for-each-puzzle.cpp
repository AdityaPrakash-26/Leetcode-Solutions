/*
Accepted
10/10 cases passed (148 ms)
Your runtime beats 89.52 % of cpp submissions
Your memory usage beats 56.67 % of cpp submissions (47.7 MB)
*/

/*
 * @lc app=leetcode id=1178 lang=cpp
 *
 * [1178] Number of Valid Words for Each Puzzle
 */

// @lc code=start
class Solution {
private:
    int bitmask(const string& word) {
        // Build a bitmask of chars to represent each word
        // the builtin std::bitset also works
        int mask = 0;
        for (char letter : word) {
            mask |= 1 << (letter - 'a');
        }
        return mask;
    }

public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        unordered_map<int, int> wordCount;  // a vector instead of unordered_map also works
        for (string& word : words) {
            wordCount[bitmask(word)]++;
        }
        vector<int> result;
        for (string& puzzle : puzzles) {
            int first = 1 << (puzzle[0] - 'a');
            int count = wordCount[first];

            // Make bitmask but ignore the first character since it must always be there.
            int mask = bitmask(puzzle.substr(1));

            // iterate over the submask
            for (int submask = mask; submask; submask = (submask - 1) & mask) {
                count += wordCount[submask | first];  // add first character
            }
            result.push_back(count);
        }
        return result;
    }
};
// @lc code=end

