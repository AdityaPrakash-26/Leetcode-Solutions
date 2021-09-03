/*
Accepted
317/317 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 34.88 % of cpp submissions (7.2 MB)
*/

/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1 == "0" && num2 == "0"){
            return "0";
        }

        vector<int> res(num1.size() + num2.size(), 0);
        int resVectorIdx = res.size() - 1;
        int firstStringIdx = num1.size() - 1;
        int secondStringIdx = num2.size() - 1;

        while(firstStringIdx >= 0 && secondStringIdx >= 0){
            int num = (num1[firstStringIdx] - '0') + (num2[secondStringIdx] - '0');
            res[resVectorIdx] += num;
            res[resVectorIdx - 1] += res[resVectorIdx]/10;
            res[resVectorIdx] = res[resVectorIdx]%10;
            resVectorIdx--;
            firstStringIdx--;
            secondStringIdx--;
        }

        while(firstStringIdx >= 0){
            int num = (num1[firstStringIdx] - '0');
            res[resVectorIdx] += num;
            res[resVectorIdx - 1] += res[resVectorIdx]/10;
            res[resVectorIdx] = res[resVectorIdx]%10;
            resVectorIdx--;
            firstStringIdx--;
        }

        while(secondStringIdx >= 0){
            int num = (num2[secondStringIdx] - '0');
            res[resVectorIdx] += num;
            res[resVectorIdx - 1] += res[resVectorIdx]/10;
            res[resVectorIdx] = res[resVectorIdx]%10;
            resVectorIdx--;
            secondStringIdx--;
        }

        int i = 0;

        while(i<res.size() && res[i] == 0){
            i++;
        }

        string ans = "";

        while(i<res.size()){
            ans.push_back((res[i] + '0'));
            i++;
        }
        return ans;
    }
};
// @lc code=end

