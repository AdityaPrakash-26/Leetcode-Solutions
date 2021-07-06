/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ans;
        ListNode* t1 = head;
        ListNode* t2 = head;

        for(int i = 0; i<n; i++){
            t1 = t1->next; 
        }

        if(t1==NULL){   
            ans = head->next;
            return ans;     
        }

        t1=t1.next;
    
        while(t1!=null){
            t1=t1->next;
            t2=t2->next;
        }

        t2->next=t2->next->next;
        return head;
    }
};
// @lc code=end

