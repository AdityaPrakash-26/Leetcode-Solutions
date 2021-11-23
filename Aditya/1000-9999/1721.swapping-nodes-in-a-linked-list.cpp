/*
Accepted
132/132 cases passed (600 ms)
Your runtime beats 36.3 % of cpp submissions
Your memory usage beats 57.02 % of cpp submissions (180.1 MB)
*/

/*
 * @lc app=leetcode id=1721 lang=cpp
 *
 * [1721] Swapping Nodes in a Linked List
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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* sizeCalculatorPtr = head;
        ListNode* left = head;
        ListNode* right = head;

        int size = 0;
        while(sizeCalculatorPtr){
            size++;
            sizeCalculatorPtr = sizeCalculatorPtr->next;
        }

        for(int i = 0; i<k-1; i++){
            left = left->next;
        }

        for(int i = 0; i<size-k; i++){
            right = right->next;
        }

        int temp = right->val;
        right->val = left->val;
        left->val = temp;
        return head;
    }
};
// @lc code=end

