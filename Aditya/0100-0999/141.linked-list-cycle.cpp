/*
Accepted
20/20 cases passed (4 ms)
Your runtime beats 99.88 % of cpp submissions
Your memory usage beats 56.83 % of cpp submissions (8.1 MB)
*/

/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        ListNode* hare = head;
        ListNode* tortoise = head;

        bool hasMetNull = false;

        if(!hare || !hare->next || !hare->next->next){
            return false;
        }

        do {
            hare = hare->next->next;
            tortoise = tortoise->next;
            if(!hare->next || !hare->next->next){
                hasMetNull = true;
                break;
            }
        } while(hare!=tortoise);

        if(hasMetNull){
            return false;
        } else {
            return true;
        }
    }
};
// @lc code=end

