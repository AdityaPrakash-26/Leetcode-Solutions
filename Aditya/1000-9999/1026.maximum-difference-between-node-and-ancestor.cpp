/*
Accepted
27/27 cases passed (6 ms)
Your runtime beats 29.67 % of cpp submissions
Your memory usage beats 94.65 % of cpp submissions (9.7 MB)
*/

/*
 * @lc app=leetcode id=1026 lang=cpp
 *
 * [1026] Maximum Difference Between Node and Ancestor
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
    int ans;
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        recurr(root, root->val, root->val);
        return ans;
    }
    
    void recurr(TreeNode *curr, int mx, int mn){
        if(!curr) return;
        
        int now = max(abs(curr->val - mx), abs(curr->val - mn));
        ans = max(ans, now);
        mx = max(curr->val, mx);
        mn = min(curr->val, mn);
        
        recurr(curr->left, mx, mn);
        recurr(curr->right, mx, mn);
    }
};
// @lc code=end

