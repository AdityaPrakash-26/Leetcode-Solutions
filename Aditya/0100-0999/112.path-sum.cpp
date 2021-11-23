/*
Accepted
116/116 cases passed (8 ms)
Your runtime beats 87.43 % of cpp submissions
Your memory usage beats 23.65 % of cpp submissions (21.3 MB)
*/

/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        
        if(root->right==NULL && root->left==NULL){
            return (targetSum - root->val)==0;
        }
        
        return hasPathSum(root->left, (targetSum - root->val)) || hasPathSum(root->right, (targetSum - root->val));
    }
};
// @lc code=end

