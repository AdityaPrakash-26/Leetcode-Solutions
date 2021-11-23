/*
Accepted
44/44 cases passed (4 ms)
Your runtime beats 55.63 % of cpp submissions
Your memory usage beats 13.61 % of cpp submissions (7.5 MB)
*/

/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr || head->next == nullptr || left == right){
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(left > 1){
            prev = curr;
            curr = curr->next;
            left--;
            right--;
        }

        ListNode* start = prev;
        ListNode* tail = curr;

        // Iteratively reverse the nodes until n becomes 0.
        ListNode* next = nullptr;
        while (right > 0) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            right--;
        }

        if (start != nullptr) {
            start->next = prev;
        } else {    //entire list has been reversed
            head = prev;
        }

        tail->next = curr;
        return head;
    }
};
// @lc code=end

