/*
Accepted
202/202 cases passed (28 ms)
Your runtime beats 41.34 % of cpp submissions
Your memory usage beats 85.74 % of cpp submissions (26 MB)
*/

/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
    TreeNode* helper(int inSt, int inEnd, int poEnd, vector<int> &inorder, vector<int> &postorder) {
        if(poEnd < 0 || inSt > inEnd) { // base condition
            return nullptr;
        }

        TreeNode *root = new TreeNode(postorder[poEnd]);

        int pivot;
        
        for(int i = inSt; i < inorder.size(); i++) {
            if(root->val == inorder[i]) {
                pivot = i; break;
            }
        }

        root->left = helper(inSt, pivot - 1, poEnd - 1 + pivot - inEnd, inorder, postorder);
        root->right = helper(pivot + 1, inEnd, poEnd - 1, inorder, postorder);

        return root;
    }    

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(0, inorder.size() - 1, postorder.size() - 1, inorder, postorder);
    }
};
// @lc code=end

