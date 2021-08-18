/*
Accepted
228/228 cases passed (8 ms)
Your runtime beats 88.32 % of cpp submissions
Your memory usage beats 53.88 % of cpp submissions (21 MB)
*/

/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
    int height(TreeNode* root){
        int x,y;
    
        if(root!=nullptr){
            x = height(root->left);
            y = height (root->right);
            
            if(x>y){
                return x+1;
            } else {
                return y+1;
            }
        }
        return 0;
    }

    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if(abs(leftHeight - rightHeight) > 1){
            return false;
        } else {
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }
};
// @lc code=end

