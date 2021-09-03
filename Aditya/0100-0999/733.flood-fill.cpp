/*
Accepted
277/277 cases passed (8 ms)
Your runtime beats 78.99 % of cpp submissions
Your memory usage beats 31.31 % of cpp submissions (14.2 MB)
*/

/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    void helper(vector<vector<int>>&image,vector<vector<bool>>&vis,int sr,int sc,int newColor,int prev){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=prev || vis[sr][sc]){
            return;
        }
        vis[sr][sc]=true;
        image[sr][sc]=newColor;
        helper(image,vis,sr+1,sc,newColor,prev);
        helper(image,vis,sr,sc+1,newColor,prev);
        helper(image,vis,sr-1,sc,newColor,prev);
        helper(image,vis,sr,sc-1,newColor,prev);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size(),m=image[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        helper(image,vis,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};
// @lc code=end

