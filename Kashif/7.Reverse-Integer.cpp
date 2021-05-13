/*   
     Runtime: 4 ms, faster than 39.45% of C++ online submissions for Reverse Integer.
     Memory Usage: 5.8 MB, less than 72.03% of C++ online submissions for Reverse Integer. 
*/

// Previous solution had runtime error 
class Solution {
public:
    int reverse(int x) {
        int temp,a=0,r;
        temp=x;
        while(temp!=0)
        {
             r=temp%10;
             if (a > INT_MAX/10 || (a == INT_MAX / 10 && r > 7)) return 0;
             if (a < INT_MIN/10 || (a == INT_MIN / 10 && r < -8)) return 0;
             a=a*10+r;
             temp/=10;
        }
        return a;
    }
};
