/*
Accepted
34/34 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 61.05 % of cpp submissions (12.5 MB)
*/

/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<int> store;
        vector<vector<int>> ans;
        q.push(root);
        if (!root)
            return ans;

        //q.push(NULL);

        while (!q.empty())
        {

            int sz = q.size();
            while (sz--)
            {
                TreeNode *node = q.front();
                q.pop();

                store.push_back(node->val);

                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
                //size--;
            }
            //reverse(store.begin(), store.end());
            ans.push_back(store);
            store.clear();
        }

        //reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

