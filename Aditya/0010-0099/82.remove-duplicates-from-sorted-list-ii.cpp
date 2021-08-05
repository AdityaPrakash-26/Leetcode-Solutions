/*
Accepted
166/166 cases passed (4 ms)
Your runtime beats 93.9 % of cpp submissions
Your memory usage beats 55.65 % of cpp submissions (11.1 MB)
*/

/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        bool shouldTheCurrentHeadBeAdded = true;
        while(head){
            while(head && head->next && head->val==head->next->val) {
                shouldTheCurrentHeadBeAdded = false; // finds duplicate, set it to false
                head = head->next;
            }
            if(shouldTheCurrentHeadBeAdded) {
                tail->next = head;
                tail = tail->next;
            }
            head = head->next;
            shouldTheCurrentHeadBeAdded = true; // time for a new head value, set flag back to true
        }
        tail->next = nullptr;
        return dummy->next;
    }
};
// @lc code=end

