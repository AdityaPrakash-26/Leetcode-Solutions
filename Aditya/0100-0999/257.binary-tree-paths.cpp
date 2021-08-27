/*
Accepted
208/208 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 63.44 % of cpp submissions (13 MB)
*/

/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    void stringify(TreeNode* root, string s, vector<string>& str){
        if(root == nullptr){
            return;
        }

        s += to_string(root->val) + "->";

        if(!root->left && !root->right){
            if(s.back() == '>'){
                s.pop_back();
                s.pop_back();
            }
            str.push_back(s);
            return;
        }

        if(root->left){
            stringify(root->left, s, str);
        }

        if(root->right){
            stringify(root->right, s, str);
        }

    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> str;
        string s = "";
        stringify(root, s, str);
        return str;
    }
};
// @lc code=end

