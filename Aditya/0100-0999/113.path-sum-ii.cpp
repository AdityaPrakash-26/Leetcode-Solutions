/*
Accepted
115/115 cases passed (7 ms)
Your runtime beats 84.82 % of cpp submissions
Your memory usage beats 81.74 % of cpp submissions (19.8 MB)
*/

/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void pathStore(TreeNode* root, vector<int>& path, int targetSum, vector<vector<int>>& res){
        if(root == NULL)
            return;	
        path.push_back(root->val);
        if(root->right == NULL and root->left == NULL and targetSum == root->val){
            res.push_back(path);
            path.pop_back();
            return;
        }
        pathStore(root->left, path, targetSum - root->val, res);
        pathStore(root->right, path, targetSum - root->val, res); 
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> res;
        pathStore(root, path, targetSum, res);
        return res;
    }
};
// @lc code=end

