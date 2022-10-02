/*
Accepted
105/105 cases passed (3 ms)
Your runtime beats 68.56 % of cpp submissions
Your memory usage beats 46.41 % of cpp submissions (11.1 MB)
*/

/*
 * @lc app=leetcode id=993 lang=cpp
 *
 * [993] Cousins in Binary Tree
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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*, TreeNode*>> q; // [node, parent]
        if(root) q.push({root, NULL});
        while(q.size()){
            TreeNode *x_parent = nullptr, *y_parent = nullptr;
            int sz = q.size();
            for(int i = 0; i < sz; ++i){
                pair<TreeNode*, TreeNode*> currPair = q.front(); 
                q.pop();
                if(currPair.first->val == x) {
                    x_parent = currPair.second;
                } else if(currPair.first->val == y) {
                    y_parent = currPair.second;
                }
                
                if(currPair.first->left) {
                    q.push({currPair.first->left, currPair.first});
                }
                
                if(currPair.first->right) {
                    q.push({currPair.first->right, currPair.first});
                }
            }
            if(x_parent || y_parent) {
                return x_parent && y_parent && x_parent != y_parent;
            }
        }
        return false;
    }
};
// @lc code=end

