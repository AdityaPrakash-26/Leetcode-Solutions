/*
Accepted
39/39 cases passed (52 ms)
Your runtime beats 29.95 % of cpp submissions
Your memory usage beats 8.12 % of cpp submissions (18 MB)
*/

/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == headB){
            return headA;
        }

        if(headA == nullptr){
            return nullptr;
        } 

        if(headB == nullptr){
            return nullptr;
        }

        ListNode* runnerA = headA;
        ListNode* runnerB = headB;

        unordered_map<ListNode*, bool> hash;

        while(runnerA){
            if(hash.find(runnerA) == hash.end()){
                hash[runnerA] = true;
            } else {
                return runnerA;
            }
            runnerA = runnerA->next;
        }

        while(runnerB){
            if(hash.find(runnerB) != hash.end()){
                return runnerB;
            }
            runnerB = runnerB->next;
        }

        return nullptr;
    }
};
// @lc code=end

