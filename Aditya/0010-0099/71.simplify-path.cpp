/*
Accepted
256/256 cases passed (4 ms)
Your runtime beats 88.86 % of cpp submissions
Your memory usage beats 22.96 % of cpp submissions (10.6 MB)
*/

/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        int n=path.length();
        stack<string>s;
                
        if(path[n-1]!='/') // so that initially path always ends with '/'
            path+="/", ++n;
            
        int i=1; // since path always starts from '/'
        string ans="";
        string temp="";
        while(i<n){
            
            if(path[i]=='/'){ // check only if we encounter '/'
                
                if(temp=="" || temp=="."){
                    // ignore
                }
                else if(temp==".."){
                    if(!s.empty()) s.pop(); // pop the top element from stack if exists
                }
                else{
                    s.push(temp); //push the directory or file name to stack
                }
                
                temp=""; // reset temp
            }
            else{
                temp.push_back(path[i]); // else append to temp
            }
            
            ++i; // increment index
        }
        
        while(!s.empty()){ // add all the stack elements
            ans="/"+s.top()+ans;
            s.pop();
        }
        
        if(ans.length()==0) // if no directory or file is present
            ans="/"; // minimum root directory must be present in ans
        
        return ans;
    }
};
// @lc code=end

