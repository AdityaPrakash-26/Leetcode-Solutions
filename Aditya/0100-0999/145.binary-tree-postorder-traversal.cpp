/*
Accepted
68/68 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 16.62 % of cpp submissions (8.6 MB)
*/

/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    void postOrderUtil(TreeNode* root, vector<int>& res){
        if(root==nullptr){
            return;
        }
        postOrderUtil(root->left, res);
        postOrderUtil(root->right, res);
        res.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postOrderUtil(root, res);
        return res;
    }
};
// @lc code=end

