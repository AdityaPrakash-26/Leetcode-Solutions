    /*
    *  Your runtime beats 81.81 % of cpp submissions.
    *  Your memory usage beats 98.62 % of cpp submissions.
    * 
    */
string addStrings(string num1, string num2) {
        if(num1.length()>num2.length()){
            swap(num1, num2);
        }
        string ans = "";
        int n1 = num1.length(), n2 = num2.length();
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int carr = 0;
        for(int i=0; i<n1; i++){
            int sum = ((num1[i] - '0')+(num2[i] - '0')+carr);
            ans.push_back(sum%10+ '0');
            carr = sum/10;
        }
        
        for(int i=n1; i<n2; i++){
            int sum = ((num2[i] - '0')+carr);
            ans.push_back(sum%10 + '0');
            carr = sum/10;
        }
        if(carr){
            ans.push_back(carr+'0');
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }