/*
Accepted
55/55 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 90.46 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode *temp = head->next;
        head->next = swapPairs(temp->next); //the head should be connected to the remaining linked list. 1 should be connected to 4 in example
        temp->next = head;  //2 should be connected to 1.

        return temp;
    }
};
// @lc code=end

