// TIME LIMIT EXCEEDED HENCE THE SOLUTION IS INCORRECT
// BUT CHECK OUT MY APPROACH

class Solution {
public:
  
//   Function to get then substring through characters vector and then convert it into string again (Confusing right?🙄)
//   Please correct it and before that let me know the exact way or Algorithm
// Regards,
//   Kashif
    string strConv(string str, int low, int high){
        vector<char> temp;
        for (int i = low; i <= high; ++i)
        {temp.push_back(str[i]);}
     
       string s(temp.begin(), temp.end());
      return s;
    }
    
    string longestPalindrome(string s) {
  
    int n = s.size();
 
    int maxLen = 1, start = 0;
 
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            int check = 1;

            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (s[i + k] != s[j - k])
                    check = 0;
 
          
            if (check && (j - i + 1) > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }
     string str = strConv(s, start, start + maxLen - 1);
    return str;
 }
    
};
