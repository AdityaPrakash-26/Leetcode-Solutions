#include<iostream>
#include<string>

using namespace std;

int strStr(string haystack, string needle) {
    int h = haystack.size();
    int n = needle.size();
    if(n == 0){
        return 0;
    } 
    if(h == 0){
        return -1;
    }

    char first = needle[0];
    bool flag = false;
    int i = 0;
    int iCopy = 0;
    for(i; i<h; i++){
        if(haystack[i] == first){
            int j = 0;
            iCopy = i;
            while(haystack[i] == needle[j]){
                if(j==n-1){
                    flag = true;
                    break;
                }
                if(i==h-1){
                    break;
                }
                i++;
                j++;
            }
        }
        if(flag == true){
            break;
        }
    }
    if(flag == true){
        return iCopy;
    } else {
        return -1;
    }
}

int main() {
    cout<<strStr("mississippi", "issip")<<endl;
}