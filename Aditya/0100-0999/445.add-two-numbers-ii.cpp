/*
Accepted
1563/1563 cases passed (24 ms)
Your runtime beats 87.91 % of cpp submissions
Your memory usage beats 68.13 % of cpp submissions (71.3 MB)
*/

/*
 * @lc app=leetcode id=445 lang=cpp
 *
 * [445] Add Two Numbers II
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
    int sizeCalc(ListNode* head){
        int size = 0;
        while(head){
            size++;
            head=head->next;
        }
        return size;
    }

    void insertNodeAtStart(ListNode* &head){
        ListNode* newNode = new ListNode(0);
        newNode->next = head;
        head = newNode;
    }

    ListNode* addTwoDigits(ListNode* currFirst, ListNode* currSecond, int &carry){
        if(currFirst == nullptr && currSecond == nullptr)
            return nullptr;
        
        ListNode* newNode = new ListNode(-1);
        newNode->next = addTwoDigits(currFirst->next, currSecond->next, carry);
        
        //all nodes have been added, now process the carry vals
        newNode->val = (currFirst->val + currSecond->val + carry) % 10;
        carry = (currFirst->val + currSecond->val + carry) / 10;
        
        return newNode;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sizeOfL1 = sizeCalc(l1);
        int sizeOfL2 = sizeCalc(l2);

        int diff = sizeOfL1 - sizeOfL2; // which list to insert zeroes into

        // insert zeroes
        if(diff > 0){
            while(diff--){
                insertNodeAtStart(l2);
            }
        } else if(diff < 0){
            diff *= -1;
            while(diff--){
                insertNodeAtStart(l1);
            }
        }

        int carry = 0;
        ListNode* dummy = new ListNode(1);
        dummy->next = addTwoDigits(l1, l2, carry);

        if(carry != 0){
            return dummy;
        } else {
            return dummy->next;
        }
    }
};
// @lc code=end

