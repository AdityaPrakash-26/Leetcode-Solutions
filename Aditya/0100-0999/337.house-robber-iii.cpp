/*
Accepted
124/124 cases passed (18 ms)
Your runtime beats 47.97 % of cpp submissions
Your memory usage beats 89.41 % of cpp submissions (22.2 MB)
*/

/*
 * @lc app=leetcode id=337 lang=cpp
 *
 * [337] House Robber III
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
    // the first element in the pair represents when you choose the current
    // value, and the second one represents when you don't
    pair<int,int> findMaxMoney (TreeNode* root) {
        if (!root){ 
            return {0, 0};
        }

        int choose, not_choose;

        pair<int,int> left = findMaxMoney(root->left);
        pair<int,int> right = findMaxMoney(root->right);

        // since we are choosing the current value, we cannot add the children's
        // value to our ongoing sum
        choose = root->val + left.second + right.second;

        not_choose = max(left.first, left.second) + max(right.first, right.second);

        return {choose, not_choose};
    }

    int rob(TreeNode* root) {
        pair<int,int> maxValue = findMaxMoney(root);
        return max(maxValue.first, maxValue.second); 
    }
};
// @lc code=end

