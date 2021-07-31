/*
Accepted
91/91 cases passed (32 ms)
Your runtime beats 73.06 % of cpp submissions
Your memory usage beats 27.01 % of cpp submissions (32.8 MB)
*/

/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
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
    int findInorderSuccessor(TreeNode* node){
        node = node->right;

        while(node->left){
            node = node->left;
        }
        
        return node->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr){
            return root;
        } else if(root->val>key){
            // replace the left subtree with the tree obtained 
            // after removing the node from the same
            root->left = deleteNode(root->left,key);
        } else if(root->val<key){
            // replace the right subtree with the tree obtained 
            // after removing the node from the same
            root->right = deleteNode(root->right,key);
        } else {
            if(root->right == nullptr){     //does not have right child
                return root->left;  //make left child take place of root
            }else if(root->left == nullptr){    
                return root->right;
            }else{
			    // replace the root value by find the minimum val from right side
                root->val = findInorderSuccessor(root);
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }
};
// @lc code=end

