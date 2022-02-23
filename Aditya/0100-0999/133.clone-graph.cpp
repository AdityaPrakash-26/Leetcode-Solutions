/*
Accepted
22/22 cases passed (6 ms)
Your runtime beats 76.11 % of cpp submissions
Your memory usage beats 59.68 % of cpp submissions (8.8 MB)
*/

/*
 * @lc app=leetcode id=133 lang=cpp
 *
 * [133] Clone Graph
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> copies;
    Node* cloneGraph(Node* node) {
        if(!node){
            return nullptr;
        }

        if (copies.find(node) == copies.end()) {
            copies[node] = new Node(node -> val, {});
            for (Node* neighbor : node -> neighbors) {
                copies[node] -> neighbors.push_back(cloneGraph(neighbor)); //dfs
            }
        }
        return copies[node];
    }
};
// @lc code=end

