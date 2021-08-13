/*
Accepted
39/39 cases passed (4 ms)
Your runtime beats 92.3 % of cpp submissions
Your memory usage beats 99.2 % of cpp submissions (18.7 MB)
*/

/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
    }
};
// @lc code=end

