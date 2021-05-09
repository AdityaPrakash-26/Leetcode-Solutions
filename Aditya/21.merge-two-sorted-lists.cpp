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
        ListNode n(INT_MIN);
        ListNode *p = &n;
        while(l1 && l2){
            if (l1->val < l2->val) {
                p->next = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }

        p->next = l1 ? l1 : l2;
        return n.next;

    }
};
// @lc code=end

