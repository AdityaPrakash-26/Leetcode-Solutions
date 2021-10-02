/**
*Your runtime beats 43.98 % of cpp submissions.
*Your memory usage beats 26.28 % of cpp submissions.
*/

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
    vector<int> vec;
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        inOrder(root->left);
        vec.push_back(root->val);
        inOrder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return vec;
    }
};
