/*
Accepted
94/94 cases passed (12 ms)
Your runtime beats 99.67 % of cpp submissions
Your memory usage beats 48.51 % of cpp submissions (28.2 MB)
*/

/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
    int findMaxUtil(TreeNode* root, int& res){
        if(root == nullptr){
            return 0;
        }

         // l and r store maximum path sum going through left and
         // right child of root respectively
        int l = findMaxUtil(root->left,res);
        int r = findMaxUtil(root->right,res);

         // Max path for parent call of root. This path must
         // include at-most one child of root
        int max_single = max(max(l, r) + root->val, root->val);
    
         // Max Top represents the sum when the Node under
         // consideration is the root of the maxsum path and no
         // ancestors of root are there in max sum path
        int max_top = max(max_single, l + r + root->val);
    
        res = max(res, max_top); // Store the Maximum Result.
    
        return max_single;
    }

    int maxPathSum(TreeNode* root) {
        if(!root->left && !root->right){
            return root->val;
        }

        int res = INT_MIN;
        findMaxUtil(root, res);
        return res;
    }
};
// @lc code=end