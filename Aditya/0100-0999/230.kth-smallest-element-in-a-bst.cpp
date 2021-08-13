/*
Accepted
93/93 cases passed (12 ms)
Your runtime beats 95.81 % of cpp submissions
Your memory usage beats 85.28 % of cpp submissions (24.1 MB)
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
    void inOrderTraversal(TreeNode* root, int &k, int &res) {
        if(root == nullptr){
            return;
        }

        inOrderTraversal(root->left, k, res);
        k--;    //already checked a node
        if(k==0){
            res = root->val;
            return;
        }
        inOrderTraversal(root->right, k, res);
    }

    int kthSmallest(TreeNode* root, int k) {
        int res;
        inOrderTraversal(root, k, res);
        return res;
    }
};
// @lc code=end

