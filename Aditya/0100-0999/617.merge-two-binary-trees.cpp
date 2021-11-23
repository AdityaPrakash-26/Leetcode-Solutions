/*
Accepted
182/182 cases passed (32 ms)
Your runtime beats 86.09 % of cpp submissions
Your memory usage beats 16.36 % of cpp submissions (33 MB)
*/

/*
 * @lc app=leetcode id=617 lang=cpp
 *
 * [617] Merge Two Binary Trees
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2){
            return nullptr;
        }

        if(!root1){
            return root2;
        }

        if(!root2){
            return root1;
        }

        TreeNode* root = new TreeNode(root1->val + root2->val);

        if(root1->left || root2->left){
            root->left = mergeTrees(root1->left, root2->left);
        }

        if(root1->right || root2->right){
            root->right = mergeTrees(root1->right, root2->right);
        }

        return root;
    }
};
// @lc code=end

