/*
Accepted
8/8 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 33.43 % of cpp submissions (8 MB)
*/

/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i = 1; i<=n; i++){
            if(i%15 == 0){
                res.push_back("FizzBuzz");
            } else if (i%5 == 0){
                res.push_back("Buzz");
            } else if (i%3 == 0){
                res.push_back("Fizz");
            } else {
                string c = to_string(i);
                res.push_back(c);
            }
        }
        return res;
    }
};
// @lc code=end

