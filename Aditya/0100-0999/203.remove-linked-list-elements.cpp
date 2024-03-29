/*
Accepted
66/66 cases passed (20 ms)
Your runtime beats 84.92 % of cpp submissions
Your memory usage beats 79.14 % of cpp submissions (14.9 MB)
*/

/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;

        while(head != nullptr && head->val == val){
            head = head->next;  // move forward until head's value is not val
                                // i.e. remove the first few occurrences of val
        }

        ListNode* curr = head;

        while(curr != nullptr && curr->next != nullptr){
            if(curr->next->val == val){
                curr->next = curr->next->next; // skip the value
                // dont update current here because of this test case
                // 1->2->3->6->6->6->5->null  val = 6
            } else {
                curr = curr->next;        
            }
        }
        return head;
    }
};
// @lc code=end

