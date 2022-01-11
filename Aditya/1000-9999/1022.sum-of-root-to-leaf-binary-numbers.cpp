/*
Accepted
63/63 cases passed (18 ms)
Your runtime beats 7.1 % of cpp submissions
Your memory usage beats 43.41 % of cpp submissions (16.7 MB)
*/

j/*
 * @lc app=leetcode id=1022 lang=cpp
 *
 * [1022] Sum of Root To Leaf Binary Numbers
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
    int sol=0;
    int sumRootToLeaf(TreeNode* root,int num=0) {
        if(!root)return 0;
        num *= 2;
        num+=root->val;
        if(!root->left&&!root->right)sol+=num;
        sumRootToLeaf(root->left,num);
        sumRootToLeaf(root->right,num);
        return sol;
    }
};
// @lc code=end

