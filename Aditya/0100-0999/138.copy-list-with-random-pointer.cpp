/*
Accepted
19/19 cases passed (16 ms)
Your runtime beats 9.27 % of cpp submissions
Your memory usage beats 27.73 % of cpp submissions (11.3 MB)
*/

/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> hash;
        Node* runner = head;
        while(runner){
            hash[runner] = new Node(runner->val);
            runner = runner->next;
        }

        runner = head;

        while(runner){
            hash[runner]->next = hash[runner->next];
            hash[runner]->random = hash[runner->random];
            runner = runner->next;
        }

        return hash[head];
    }
};
// @lc code=end

