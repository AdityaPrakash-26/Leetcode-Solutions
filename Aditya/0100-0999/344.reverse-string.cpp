/*
Accepted
477/477 cases passed (25 ms)
Your runtime beats 25.78 % of cpp submissions
Your memory usage beats 40.78 % of cpp submissions (23.3 MB)
*/

/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int leftIdx = 0;
        int rightIdx = s.size() - 1;

        while(leftIdx < rightIdx){
            swap(s[leftIdx], s[rightIdx]);
            leftIdx++;
            rightIdx--;
        }
    }
};
// @lc code=end

