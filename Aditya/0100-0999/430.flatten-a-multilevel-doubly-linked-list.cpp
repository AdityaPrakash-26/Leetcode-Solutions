/*
Accepted
26/26 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 20.82 % of cpp submissions (7.4 MB)
*/

/*
 * @lc app=leetcode id=430 lang=cpp
 *
 * [430] Flatten a Multilevel Doubly Linked List
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head, Node* rest = nullptr) {
        if (!head) {
            return rest;
        }

        head->next = flatten(head->child, flatten(head->next, rest));

        if (head->next) {
            head->next->prev = head;
        }

        head->child = nullptr;
        
        return head;
    }
};
// @lc code=end

