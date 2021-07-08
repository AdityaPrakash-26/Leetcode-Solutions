/*
Accepted
166/166 cases passed (12 ms)
Your runtime beats 47.88 % of cpp submissions
Your memory usage beats 28.05 % of cpp submissions (11.6 MB)
*/

/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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

        ListNode* pointer = head;
        while(pointer != NULL && pointer->next != NULL){
            if(pointer->val == pointer->next->val){
                pointer->next = pointer->next->next; //if the val of current node is equals to the val of next node then skip the node
            }
            else{
                pointer = pointer->next;
            }
        }
        return head;
    }
};
// @lc code=end

