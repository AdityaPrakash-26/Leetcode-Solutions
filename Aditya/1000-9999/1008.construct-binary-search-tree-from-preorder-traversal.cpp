/*
Accepted
110/110 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 66.04 % of cpp submissions (13.7 MB)
*/

/*
 * @lc app=leetcode id=1008 lang=cpp
 *
 * [1008] Construct Binary Search Tree from Preorder Traversal
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
    int idx = 0;
    TreeNode* bstFromPreorderUtil(vector<int>& preorder, int parentVal){
        if(idx>=preorder.size() || preorder[idx] > parentVal){
            return nullptr;
        }

        TreeNode* temp = new TreeNode(preorder[idx]);
        idx++;
        temp->left = bstFromPreorderUtil(preorder, temp->val);
        temp->right = bstFromPreorderUtil(preorder, parentVal);
        return temp;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bstFromPreorderUtil(preorder, INT_MAX);
    }
};
// @lc code=end

