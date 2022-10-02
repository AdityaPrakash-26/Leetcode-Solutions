/*
Accepted
80/80 cases passed (4 ms)
Your runtime beats 98.76 % of cpp submissions
Your memory usage beats 72.18 % of cpp submissions (21.6 MB)
*/

/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    bool validate(TreeNode* node, TreeNode*& prev){
        if(node == nullptr){
            return true;
        }

        if(validate(node->left, prev) != true){
            return false;
        }

        if(prev != nullptr && prev->val >= node->val){
            return false;
        }

        prev = node;

        return validate(node->right, prev);

    }

    bool isValidBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        return validate(root, prev);
    }
};
// @lc code=end

