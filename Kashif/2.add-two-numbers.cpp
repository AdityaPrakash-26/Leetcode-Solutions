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

    //Function for creating new node
    ListNode* newNode(int val){
        ListNode* newnode = new ListNode();
        newnode->val = val;
        newnode->next = NULL;
        return newnode;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = NULL;
        ListNode *temp, *prev = NULL;
        int carry=0, sum;
        
        while(l1!=NULL || l2!=NULL){
            sum = carry + (l1 ? l1->val : 0)
                + (l2 ? l2->val : 0);
            //Carry Over
            carry = (sum >= 10) ? 1 : 0;
            
            sum = sum % 10;
            temp = newNode(sum);
            
            if (res == NULL)
            res = temp;

        // If this is not the first
        // node then connect it to the rest.
        else
            prev->next = temp;

        // Set prev for next insertion
        prev = temp;

        // Move first and second
        // pointers to next nodes
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
        }
        
        if (carry > 0)
            temp->next = newNode(carry);

    return res;   
        
    }
    
    
};
