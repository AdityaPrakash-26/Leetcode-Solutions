/*
Accepted
36/36 cases passed (36 ms)
Your runtime beats 83.94 % of cpp submissions
Your memory usage beats 92.94 % of cpp submissions (34.6 MB)
*/

/*
 * @lc app=leetcode id=700 lang=cpp
 *
 * [700] Search in a Binary Search Tree
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root){
            return nullptr;
        }

        if(root->val == val){
            return root;
        } else if (root->val < val){
            return searchBST(root->right, val);
        } else {
            return searchBST(root->left, val);
        }
    }
};
// @lc code=end

