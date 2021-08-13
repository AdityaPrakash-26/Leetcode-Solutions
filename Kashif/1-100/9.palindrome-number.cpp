// Runtime: 4ms faster than 93.17% of C++ online submission
// Memory Usage: 5.7 MB, less tha  87.51% of C++ online submissions

class Solution {
public:
    bool isPalindrome(int x) {
//       If Number is Negative then no need to check the number as it is already not Palindrome
       if(x<0){
           return false;
	   }
//       Else check the reverse of the number if the reverse == x then return true, otherwise return false
       int rem = 0;
       int n = x;
       unsigned int rev = 0;
       while(n!=0){
         rem = n%10;
         rev = rev*10 + rem;
         n = (n-rem)/10;
       };
    if(rev == x){
        return true;
    }
   return false;
 }
};
