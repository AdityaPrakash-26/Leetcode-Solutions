/*
Accepted
203/203 cases passed (16 ms)
Your runtime beats 78.45 % of cpp submissions
Your memory usage beats 55.25 % of cpp submissions (26.3 MB)
*/

/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorderToIndexMap;  //
        for (int i = 0; i < inorder.size(); i++)
            inorderToIndexMap[inorder[i]] = i;
        return splitTree(preorder, inorderToIndexMap, 0, 0, inorder.size()-1);
    }
    
    TreeNode* splitTree(vector<int>& preorder, unordered_map<int, int>& inorderToIndexMap, int preIdx, int ileft, int iright) {
        int rootVal = preorder[preIdx], imid = inorderToIndexMap[rootVal];
        TreeNode* root = new TreeNode(rootVal);            
        if (imid > ileft)
            root->left = splitTree(preorder, inorderToIndexMap, preIdx+1, ileft, imid-1);
        if (imid < iright)
            root->right = splitTree(preorder, inorderToIndexMap, preIdx+imid-ileft+1, imid+1, iright);
        return root;
    }
};
// @lc code=end

