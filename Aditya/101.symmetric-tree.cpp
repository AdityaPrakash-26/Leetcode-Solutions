/*
Accepted
197/197 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 39.92 % of cpp submissions (16.5 MB)
*/

/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isSymmetricUtil(TreeNode* left, TreeNode* right){
        if(left == nullptr && right == nullptr){
            return true;
        }

        //one of them is not null, hence not symmetric
        if(left == nullptr || right == nullptr){
            return false;
        }

        if(left->val != right->val){
            return false;
        }

        return ((isSymmetricUtil(left->left, right->right)) && (isSymmetricUtil(left->right, right->left)));
    }

    bool isSymmetric(TreeNode* root) {
        return isSymmetricUtil(root->left, root->right);
    }
};
// @lc code=end

