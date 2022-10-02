/ **
*@author = "Kashif Raza"
*You are here! Your runtime beats 61.19 % of cpp submissions.
*You are here!Your memory usage beats 49.18 % of cpp submissions.
*
*/

class Solution {
public:
    string intToRoman(int num) {
//         if value is greater than 3999 or less than 1 return NULL String
        if(num<1 || num>3999) return "";
        int numVal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string numChar[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int i=0;
        string val = "";
        while(num!=0){
            while(num>=numVal[i]){
                num-=numVal[i];
                val+=numChar[i];
            }
            i++;
        }
      return val;
    }
};
