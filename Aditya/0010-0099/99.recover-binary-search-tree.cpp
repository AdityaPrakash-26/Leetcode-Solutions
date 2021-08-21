/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
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
    void recoverTree(TreeNode* root) {
        if(root == nullptr){
            return;
        }

        recoverTree(root->left);

        if(root->left && root->val < root->left->val){
            swap(root, root->left);
            return;
        }

        if(root->right && root->val < root->right->val){
            swap(root, root->right);
            return;
        }

        recoverTree(root->right);
    }
};
// @lc code=end

