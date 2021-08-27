/**
*Runtime: 32 ms, faster than 9.42% of C++ online submissions for Remove Linked List Elements.
*Memory Usage: 15 MB, less than 42.90% of C++ online submissions for Remove Linked List Elements.
*
*@author = "KASHIF RAZA"
*/

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
       ListNode* curr=head;
        if(head==NULL)return NULL;
        
        while (curr->next != NULL)
        {
            if (curr->next->val == val)
            {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
            else
            {
            curr = curr->next;
            }
        }
        
        if (head->val == val)
        {
            ListNode* temp=head;
            head = head->next;
            delete temp;
        }
        return head;
    }
};
