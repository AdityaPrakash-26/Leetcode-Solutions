/*
Accepted
27/27 cases passed (24 ms)
Your runtime beats 94.54 % of cpp submissions
Your memory usage beats 90.69 % of cpp submissions (23.2 MB)
*/

/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
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
//recursive
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if ((root->val > p->val) && (root->val > q->val)) {
            return lowestCommonAncestor(root->left, p, q);
        }
        if ((root->val < p->val) && (root->val < q->val)) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
//iterative
    TreeNode* lowestCommonAncestorIterative(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur = root;
        while (true) {
            if (p -> val < cur -> val && q -> val < cur -> val) {
                cur = cur -> left;
            } else if (p -> val > cur -> val && q -> val > cur -> val) {
                cur = cur -> right;
            } else {
                break;
            }
        }
        return cur;
    }

};
// @lc code=end
