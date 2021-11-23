/*
Accepted
36/36 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 46.74 % of cpp submissions (7 MB)
*/

/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
// @lc code=end

