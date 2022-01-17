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
    // DFS Based
    map<Node*, Node*> hashMap;
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        if(hashMap.find(node) == hashMap.end()){
            hashMap[node] = new Node(node->val, {});
            for(Node* neighbor: node->neighbors){
                hashMap[node]->neighbors.push_back(cloneGraph(neighbor));
            }
        }
        return hashMap[node];
    }
    
};