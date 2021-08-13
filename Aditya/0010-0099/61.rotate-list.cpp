/*
Accepted
231/231 cases passed (4 ms)
Your runtime beats 94.4 % of cpp submissions
Your memory usage beats 49.92 % of cpp submissions (11.8 MB)
*/

/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head == nullptr){
            return head;
        }

        //calculate size
        ListNode* runner = head;
        int size = 1;
        while(runner->next != nullptr){
            size++;
            runner = runner->next;
        }

        k %= size;

        ListNode* fast = head;
        ListNode* slow = head;

        //give headstart to fast
        for(int i = 0; i<k; i++){
            fast = fast->next;
        }

        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        // at this point, fast is point to the current tail
        // and slow is pointing to the new tail.
        fast->next = head;
        head = slow->next;
        slow->next = nullptr;

        return head;
    }
};
// @lc code=end

