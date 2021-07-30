/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
    int ans=0;

    int height(TreeNode* root){
        if(root == nullptr) {
            return 0;
        }
        
        int lHeight = height(root->left);
        int rHeight = height(root->right);
        
        ans = max(ans, 1 + lHeight + rHeight);
        return 1 + max(lHeight , rHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        height(root);
        return ans-1;
    }
};
// @lc code=end

