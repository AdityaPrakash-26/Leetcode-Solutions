/* Problem 557 Leetcode
 * Your runtime beats 73.17 % of cpp submissions.
 * Your memory usage beats 38.75 % of cpp submissions.
 *
 *@author = "Kashif Raza"
/

class Solution {
public:
    string reverseWords(string s) {
        int a = 0;
        s+=' ';
        for(int i=0; i<s.length(); i++){
            int k;
            if(s[i] == ' ' && i!=0){
                k = i-1;
                while(a<k){
                    char tmp = s[a];
                    s[a] = s[k];
                    s[k] = tmp;
                    a++;k--;
                }
                a = i+1;
            }
        }
        return s.substr(0, s.length()-1);
    }
};
