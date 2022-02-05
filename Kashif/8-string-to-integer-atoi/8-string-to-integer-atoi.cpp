class Solution {
public:
    int convertArrToInt(vector<long long> arr, bool isNegative);
    int myAtoi(string s) {
      int num = 0;
        stringstream ss;
        ss << s;
        ss >> num;
        return num;
    }
};

int Solution::convertArrToInt(vector<long long> arr, bool isNegative){
    reverse(arr.begin(), arr.end());
    long long res = 0;
    int powCtr = 0;
    for(auto i : arr){
        res += i*pow(10, powCtr);
        if(res > INT_MAX){
            return INT_MAX;
        }else if(isNegative && INT_MIN > (-1*res)){
            return INT_MIN;
        }
        powCtr++;
    }
    if(isNegative){
        res *= -1;
    }
    int ans = res;
    return ans;
}