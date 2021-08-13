/*
Accepted
31/31 cases passed (4 ms)
Your runtime beats 99.6 % of cpp submissions
Your memory usage beats 42.17 % of cpp submissions (21.5 MB)
*/

/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
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
    TreeNode* sortedArrayToBSTUtil(vector<int>& nums, int start, int end){
        /* Base Case */
        if (start > end){
            return NULL;
        }
    
        /* Get the middle element and make it root */
        int mid = (start + end)/2;
        TreeNode *root = new TreeNode(nums[mid]);
    
        /* Recursively construct the left subtree
        and make it left child of root */
        root->left = sortedArrayToBSTUtil(nums, start, mid - 1);
    
        /* Recursively construct the right subtree
        and make it right child of root */
        root->right = sortedArrayToBSTUtil(nums, mid + 1, end);
    
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTUtil(nums, 0, nums.size()-1);
    }
};
// @lc code=end

