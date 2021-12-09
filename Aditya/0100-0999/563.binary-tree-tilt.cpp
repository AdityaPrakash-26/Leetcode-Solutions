/*
Accepted
77/77 cases passed (22 ms)
Your runtime beats 32.66 % of cpp submissions
Your memory usage beats 74.03 % of cpp submissions (23.7 MB)
*/

/*
 * @lc app=leetcode id=563 lang=cpp
 *
 * [563] Binary Tree Tilt
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
    int res = 0;
    int dfs(TreeNode *root) {
		// computing local left and right sub sums
        int left = (root->left ? dfs(root->left) : 0), right = (root->right ? dfs(root->right) : 0);
        // count the current tilt
		res += abs(left - right);
		// return the sum so far
        return left + right + root->val;
    }
    int findTilt(TreeNode* root) {
        if (root) dfs(root);
        return res;
    }
};
// @lc code=end

