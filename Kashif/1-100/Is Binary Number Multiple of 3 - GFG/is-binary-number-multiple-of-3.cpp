// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int isDivisible(string s){
	    //complete the function here
	   int o = 0 , e = 0;
	    for(int i = 0 ; i < s.length() ; i++){
	        if(i%2 == 0 && s[i] == '1') e++;
	        else if(i%2 == 1 && s[i] == '1') o++;
	    }
	    return (abs(o-e)%3) == 0;
	}

};

// { Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}

  // } Driver Code Ends