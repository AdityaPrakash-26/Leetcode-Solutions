/*
Accepted
69/69 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 94.16 % of cpp submissions (8.3 MB)
*/

/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    void preorderUtil(TreeNode* root, vector<int>& res){
        if(root==nullptr){
            return;
        }
        res.push_back(root->val);
        preorderUtil(root->left, res);
        preorderUtil(root->right, res);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorderUtil(root, res);
        return res;
    }
};
// @lc code=end

