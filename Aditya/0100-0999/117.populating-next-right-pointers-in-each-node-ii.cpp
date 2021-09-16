/*
Accepted
55/55 cases passed (12 ms)
Your runtime beats 77.72 % of cpp submissions
Your memory usage beats 41.8 % of cpp submissions (17.6 MB)
*/

/*
 * @lc app=leetcode id=117 lang=cpp
 *
 * [117] Populating Next Right Pointers in Each Node II
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root){
            return root;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            for(int i = 0, n = q.size(); i < n; i++){ // scan tree topdown, level by level
                Node* curr = q.front(); 
                q.pop();
                if(i < n - 1){ //if not the last element(right branch element)
                    curr->next = q.front(); 
                }
                if(curr->left){ 
                    q.push(curr->left);
                }
                if(curr->right){ 
                    q.push(curr->right);
                }
            }
        }
        return root;
    }
};
// @lc code=end

