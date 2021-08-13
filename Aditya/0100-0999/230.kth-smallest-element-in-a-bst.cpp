/*
Accepted
93/93 cases passed (12 ms)
Your runtime beats 95.81 % of cpp submissions
Your memory usage beats 15.55 % of cpp submissions (24.4 MB)
*/

/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
    void inOrderTraversal(TreeNode* root, vector<int> &res) {
        if(root==nullptr){
            return;
        }
        inOrderTraversal(root->left, res);
        res.push_back(root->val);
        inOrderTraversal(root->right, res);
        return;
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        inOrderTraversal(root, inorder);

        return inorder[k-1];

    }
};
// @lc code=end

