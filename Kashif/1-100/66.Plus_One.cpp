/*
*Your runtime beats 45.01 % of cpp submissions.
*Your memory usage beats 60.21 % of cpp submissions.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryOver = 0, i=digits.size()-2, numSize = digits.size()-1;
        
        if(digits.size() == 1 && digits[0] == 9){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
            return digits;
        }
        
        if(digits[numSize] == 9){
            digits[numSize] = 0;
            carryOver = 1;
        }else{
            digits[numSize] = digits[numSize]+1;
            return digits;
        }
        
        while(i>0){
            if(digits[i]+carryOver > 9){
                digits[i] = 0;
                
            }else if(digits[i]+carryOver<=9 && carryOver == 1){
                digits[i] = digits[i]+1;
                carryOver = 0;
            }
            
            i--;
        }
        if(i == 0 && digits[i]+carryOver > 9){
            digits[i] = 0;
            digits.insert(digits.begin(), 1);
        }else if(i == 0 && carryOver == 1 && digits[i]+carryOver <=9){
            digits[i] = digits[i]+carryOver;
        }
        
        return digits;
    }
};
