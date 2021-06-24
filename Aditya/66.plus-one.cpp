/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        digits[size-1]++;
        if(digits[size-1] == 10){
            int carry = 1;
            int i = 1;      //index indicator to see the index we at from the right end
            digits[size-1] = 0;
            while(carry){
                if(size - 1 - i>=0){
                    carry--;
                    digits[size - 1 - i]++;
                    if(digits[size-1-i]==10){
                        carry++;
                        digits[size-1-i] = 0;
                    }
                    i++;
                } else {
                    digits.insert(digits.begin(), carry);
                    digits[1]%=10;
                    break;
                }
            }
        }
        return digits;
    }
};
// @lc code=end

