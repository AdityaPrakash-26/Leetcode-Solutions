/*
Accepted
31/31 cases passed (16 ms)
Your runtime beats 67.97 % of cpp submissions
Your memory usage beats 57.46 % of cpp submissions (14.2 MB)
*/

/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if( root == nullptr || root == p || root == q ){
            return root;
        }

        TreeNode* left = lowestCommonAncestor( root->left, p, q );
        TreeNode* right = lowestCommonAncestor( root->right, p, q );
        
        if( left == nullptr ){
            return right;
        }
        
        if( right == nullptr ){
            return left;
        }
        return root;
    }
};
// @lc code=end

