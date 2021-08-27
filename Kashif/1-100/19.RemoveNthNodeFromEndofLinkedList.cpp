/**
*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Nth Node From End of List.
*Memory Usage: 10.7 MB, less than 30.19% of C++ online submissions for Remove Nth Node From End of List.
*@author: Kashif Raza
*
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int countNode = 1;
        ListNode* p=head;
        while(p->next!=NULL){
            p = p->next;
            countNode++;
        }
        if (countNode==1 && n==1) return NULL;
        if (countNode==n) return head->next;
        p = head;
        for (int i = 2; i<= countNode-n;++i){
            p = p->next;
        }
        p->next = p->next->next;
        return head;
    }
};
