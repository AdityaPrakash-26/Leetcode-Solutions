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

        ListNode* tortoise = head;
        ListNode* hare = head;

        do{
            if(!hare || !hare->next){
                return nullptr;
            }
            hare = hare->next->next;
            tortoise = tortoise->next;
        } while (hare != tortoise);

        hare = head;

        while(hare != tortoise){
            hare = hare->next;
            tortoise = tortoise->next;
        }

        return hare;
    }
};
// @lc code=end

