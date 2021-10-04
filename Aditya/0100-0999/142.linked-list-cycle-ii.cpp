/*
Accepted
16/16 cases passed (13 ms)
Your runtime beats 27.36 % of cpp submissions
Your memory usage beats 73.49 % of cpp submissions (7.6 MB)
*/

/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        do {
            if(!fast || !fast->next){
                return nullptr;
            }
            slow = slow->next;
            fast = fast->next->next;
        } while(slow!=fast);

        fast = head;

        while(slow != fast){
            fast = fast->next;
            slow = slow->next;
        }

        return fast;
    }
};
// @lc code=end

