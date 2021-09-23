/*
Accepted
422/422 cases passed (32 ms)
Your runtime beats 89.9 % of cpp submissions
Your memory usage beats 70.49 % of cpp submissions (36.8 MB)
*/

/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
    void inorder(TreeNode* root, vector<int>& res) {
        if(root == nullptr){
            return;
        }

        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> res;
        inorder(root, res);
        int i = 0;
        int j = res.size()-1;

        while(i<j){
            if(res[i] + res[j] == k){
                return true;
            } else if (res[i] + res[j] > k){
                j--;
            } else {
                i++;
            }
        }

        return false;
    }
};
// @lc code=end

