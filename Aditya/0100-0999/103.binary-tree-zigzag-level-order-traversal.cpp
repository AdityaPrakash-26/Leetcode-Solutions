/*
Accepted
33/33 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 94.11 % of cpp submissions (12 MB)
*/

/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> out;
            
        q.push(root);  
        int level = 0; // to alternate levels
        
        while (!q.empty()) {
            int size = q.size();  
            vector<int> curr(size); 
            
            for (int i = 0; i < size; i++) {
                TreeNode* tmp = q.front();
                q.pop();
                if(level == 0) {
                    curr[i] = tmp->val; // odd level, insert like 0, 1, 2, 3 etc. 
                } else {
                    curr[size - i - 1] = tmp->val; // even level insert from end. 3, 2, 1, 0. (size - i - 1) to get the index from end
                }
                
                if(tmp->left){ 
                    q.push(tmp->left);
                }
                if(tmp->right){ 
                    q.push(tmp->right);
                }
            }
            out.push_back(curr); // now push the level traversed to output vector
            level = !level; // toggle the level using negation. or level == 0 ? level = 1 : level = 0;
        }
        return out;
    }
};
// @lc code=end

