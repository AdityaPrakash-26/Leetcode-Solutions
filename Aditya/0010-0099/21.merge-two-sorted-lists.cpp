/*
* Accepted
* 208/208 cases passed (16 ms)
* Your runtime beats 24.88 % of cpp submissions
* Your memory usage beats 15.19 % of cpp submissions (14.9 MB)
*/

/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        
        while(l1 && l2){
            if(l1->val < l2->val){
                temp->next = new ListNode(l1->val);
                l1=l1->next;
                temp = temp->next;
            } else {
                temp->next = new ListNode(l2->val);
                l2=l2->next;
                temp = temp->next;
            }
        }
        
        while(l1){
            temp->next = new ListNode(l1->val);
            l1=l1->next;
            temp = temp->next;
        }
        
        while(l2){
            temp->next = new ListNode(l2->val);
            l2=l2->next;
            temp = temp->next;
        }
        return dummy->next;
    }
};
// @lc code=end

