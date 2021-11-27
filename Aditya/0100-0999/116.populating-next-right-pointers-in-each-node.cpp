/*
Accepted
58/58 cases passed (20 ms)
Your runtime beats 61.25 % of cpp submissions
Your memory usage beats 36.29 % of cpp submissions (17.1 MB)
*/

/*
 * @lc app=leetcode id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
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

// BFS APPROACH
    Node* connect(Node* root) {
        if(!root){
            return root;
        }
        queue<Node*> bfs;
        bfs.push(root);

        while(bfs.empty() == false){
            if(bfs.front()->left){
                bfs.push(bfs.front()->left);
            }

            if(bfs.front()->right){
                bfs.push(bfs.front()->right);
            }

            Node* temp = bfs.front();
            bfs.pop();
            temp->next = bfs.front();
        }

        Node* runner = root;

        while(runner){
            runner->next = nullptr;
            runner = runner->right;
        }

        return root;

    }

// RECURSIVE APPROACH
    Node* connectRecursive(Node* root) {
        if (root) {
            if (root->left) {
                root->left->next = root->right;
                if (root->next)
                root->right->next = root->next->left;
                connect(root->left);
                connect(root->right);
            }
        }
        return root;
    }
};
// @lc code=end

