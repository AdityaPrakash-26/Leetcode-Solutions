/*
Accepted
208/208 cases passed (8 ms)
Your runtime beats 24.81 % of cpp submissions
Your memory usage beats 70.44 % of cpp submissions (10.6 MB)
*/

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
        ListNode *p1 = head, *p2 = head;
        for (int i = 0; i < n; i++) {
            p1 = p1->next;
        }
        if (!p1) {
            return head->next;
        }

        while (p1->next) {
            p1 = p1->next;
            p2 = p2->next;
        }
        
        p2->next = p2->next->next;
        return head;
    }
};
// @lc code=end

