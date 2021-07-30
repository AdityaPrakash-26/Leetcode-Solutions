/*
 * @lc app=leetcode id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
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
    void flatten(TreeNode* root) {
        if(root) {
            //Move the left node to the right node
            TreeNode* temp = root->right;
            root->right = root->left;   //make the left node as right node
            root->left = nullptr;   //make the previous left as null(for preorder)
            TreeNode* node = root;
            
            //Move to the end of the prev left node which is the new right node
            while(node->right) {
                node = node->right;
            }
            
            //Append the right node to its end
            node->right = temp;
            flatten(root->right); 
        } 
        return;
    }
};
// @lc code=end

