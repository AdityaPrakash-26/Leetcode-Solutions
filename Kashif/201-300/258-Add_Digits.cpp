/*
    Time Complexity: O(n), Your runtime beats 100.00 % of cpp submissions.
    Space Complexity: O(1), Your memory usage beats 75.31 % of cpp submissions.
*/

class Solution {
public:
    int addDigits(int num) {
        if(num == 0){
            return 0;
       }else if(num%9 == 0){
            return 9;
        }
        
        return num%9;
    }
};