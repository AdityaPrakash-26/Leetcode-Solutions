#include <iostream> //added to fix error notifs in VSCode

/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start

//   Definition for singly-linked list.

//uncommented to fix error notifs in VSCode

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 //uncommenting ends
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * l3 = new ListNode(0);
        ListNode * head = l3;
        int carry = 0;

          while(l1!=NULL && l2!=NULL){
            int value = l1->val+l2->val + carry;
            carry = value>=10 ? 1: 0;
            value = carry==0 ? value : value-10;

            head->next = new ListNode(value);
            head=head->next;
            
            l1=l1->next;l2=l2->next;
        }
        
        //When one of the list has finished
        while(l1 != NULL){
            int value = l1->val+carry;
            carry = value>=10 ? 1: 0;
            value = carry==0 ? value : value-10;
            
            
            head->next = new ListNode(value);
            head=head->next;
            l1=l1->next;
        }
        
        while(l2 != NULL){
            int value = l2->val + carry;
            carry = value>=10 ? 1: 0;
            value = carry==0 ? value : value-10;
            
            
            head->next = new ListNode(value);
            head=head->next;
            l2=l2->next;
        }
        
        //If carry is left in the end
        if(carry)
        {
            head->next = new ListNode(carry);
        }
        
        return l3->next;
    }
};
// @lc code=end

