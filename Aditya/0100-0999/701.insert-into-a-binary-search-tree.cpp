/*
Accepted
35/35 cases passed (80 ms)
Your runtime beats 90.7 % of cpp submissions
Your memory usage beats 80 % of cpp submissions (56.8 MB)
*/

/*
 * @lc app=leetcode id=701 lang=cpp
 *
 * [701] Insert into a Binary Search Tree
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* newRoot = new TreeNode(val);
            return newRoot;
        }

        if(val > root->val){
            if(root->right){
                root->right = insertIntoBST(root->right, val);
            } else {
                root->right = new TreeNode(val);
            }
        } else {
            if(root->left){
                root->left = insertIntoBST(root->left, val);
            } else {
                root->left = new TreeNode(val);
            }
        }
        return root;
    }
};
// @lc code=end

