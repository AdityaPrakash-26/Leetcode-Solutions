/*
Accepted
215/215 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 49.01 % of cpp submissions (12.1 MB)
*/

/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)
            return ans;
        
        queue<TreeNode*>q;
        
        q.push(root); // Initially push the root node
        q.push(nullptr); // Then push nullptr, as level=0 contains only the root node
        
        TreeNode* curr;
        
        while(!q.empty()){
            if(q.front()!=nullptr){ // if the end of current level is not reached
                
                curr=q.front(); // keep the current node
                
                // push the left and right child of curr node into the queue if exists
                if(curr->left) q.push(curr->left);              
                if(curr->right) q.push(curr->right);
                
                q.pop(); //remove curr node from queue
            }
            else{ // nullptr signifies the end of the current level, so need to add the last element of this level to ans
                
                // last element of the level = last deleted element of queue from front
                ans.push_back(curr->val); // curr contains the last deleted element of queue from front
                
                q.pop(); // remove the nullptr, as this level has been processed 
                
                //if the queue is not empty then again push nullptr to keep a tag at the end of the next level
                if(!q.empty()) q.push(nullptr);
            }
        }
        
        return ans;

    }
};
// @lc code=end

