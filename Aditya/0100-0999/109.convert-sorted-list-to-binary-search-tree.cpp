/*
Accepted
32/32 cases passed (16 ms)
Your runtime beats 99.71 % of cpp submissions
Your memory usage beats 49.12 % of cpp submissions (31.1 MB)
*/

/*
 * @lc app=leetcode id=109 lang=cpp
 *
 * [109] Convert Sorted List to Binary Search Tree
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode* head;
    int countNodesInList(ListNode* head){
        int count = 0;
        ListNode* curr = head;
        while(curr){
            curr = curr->next;
            count++;
        }
        return count;
    }

    TreeNode* treeify(int size){
        if(size == 0){
            return nullptr;
        }

        TreeNode* left = treeify(size/2);
        TreeNode* root = new TreeNode(head->val);
        head = head->next;
        root->left = left;

        root->right = treeify(size - size/2 - 1);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* curr) {
        head = curr;
        int size = countNodesInList(curr);
        return treeify(size);
    }
};
// @lc code=end

