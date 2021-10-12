/*
Accepted
52/52 cases passed (120 ms)
Your runtime beats 19.82 % of cpp submissions
Your memory usage beats 21.26 % of cpp submissions (46.6 MB)
*/

/*
 * @lc app=leetcode id=297 lang=cpp
 *
 * [297] Serialize and Deserialize Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) {
            return "nullptr,";
        }

        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string s;
        for(int i = 0; i < data.size(); i++) {
            if(data[i] == ','){
                q.push(s);
                s.clear();
                continue;
            }
            s += data[i];
        }
        if(s.size() != 0){
            q.push(s);
        }
        return deserialize_helper(q);
    }

    TreeNode* deserialize_helper(queue<string> &q) {
        string s = q.front();
        q.pop();
        if( s== "nullptr"){
            return nullptr;
        }
        TreeNode* root = new TreeNode(stoi(s));
        root->left = deserialize_helper(q);
        root->right = deserialize_helper(q);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
// @lc code=end

