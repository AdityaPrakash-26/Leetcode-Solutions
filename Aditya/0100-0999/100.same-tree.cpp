/*
Accepted
60/60 cases passed (4 ms)
Your runtime beats 46.77 % of cpp submissions
Your memory usage beats 6.75 % of cpp submissions (10.1 MB)
*/

/*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        if(q->val!=p->val) return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);

    }
};
// @lc code=end

