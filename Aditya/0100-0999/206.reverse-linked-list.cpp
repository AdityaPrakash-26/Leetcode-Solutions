/*
Accepted
28/28 cases passed (8 ms)
Your runtime beats 66.22 % of cpp submissions
Your memory usage beats 41.58 % of cpp submissions (8.4 MB)
*/

/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* foll = nullptr;

        while(curr){
            foll = curr->next;
            curr->next = prev;
            prev = curr;
            curr = foll;
        }

        return prev;
    }
};
// @lc code=end

