/*
Accepted
182/182 cases passed (37 ms)
Your runtime beats 17.27 % of cpp submissions
Your memory usage beats 82.59 % of cpp submissions (28.7 MB)
*/

/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
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
    bool isSametree(TreeNode* root, TreeNode* subRoot){
        //if any of the tree is null then there is no need to compare 
        if(!root || !subRoot){
            //if either of them are null both of them need to be null to be true
            return root==NULL && subRoot==NULL;
        } //now since both are not null check if they have same value otherwise return false
        else if(root->val == subRoot->val){
            //if value is same then check if both its left and right sub-tree are same          
            return isSametree(root->left,subRoot->left) && isSametree(root->right,subRoot->right);
        } else {
            return false;
        }
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root){
            //if main tree is null then return false
            return false;
        }   
        else if(isSametree(root,subRoot)){
            //check if root and subRoot are same, if yes return true
            return true;
        }
        else{
            //if root and subRoot are not same then pass left and right nodes, and check same for that nodes as well as its child nodes.
            return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        }
    }
};
// @lc code=end

