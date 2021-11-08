/*
Accepted
108/108 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 12.68 % of cpp submissions (9.6 MB)
*/

/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
    vector<int> nums;
    void dfs(TreeNode* root, int currentNum){
        if(!root){
            return;
        }

        currentNum *= 10;
        currentNum += root->val;

        if(!root->left && !root->right){
            nums.push_back(currentNum);
        } else {
            dfs(root->left, currentNum);
            dfs(root->right, currentNum);
        }
    }

    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
        }
        return sum;
    }
};
// @lc code=end

