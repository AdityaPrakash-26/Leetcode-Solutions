#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int max = INT_MIN;
    int current_length = 0;
    bool present[26] = {false};

    for(int i = 0; i<s.size()-1; i++){
        if(present[s.at(i)-'a']){
            if(max<current_length){
                max = current_length;
                current_length = 1;
                for(int i = 0; i<26; i++){
                    present[i] = false; 
                }
                continue;
            }
        } else {
            current_length++;
            present[s.at(i)-'a'] = true;
        }
    }
    return max;
}

int main(){
    string s = "pwwkew";
    cout<<"Hello";
    cout<<lengthOfLongestSubstring(s);
}