/*
Accepted
15/15 cases passed (64 ms)
Your runtime beats 64.64 % of cpp submissions
Your memory usage beats 26.79 % of cpp submissions (48.1 MB)
*/

/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
class TrieNode{
public:
    vector<TrieNode*> dict;
    bool isEnd;
    TrieNode(){
        isEnd = false;
        dict.resize(26, nullptr);
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;
        for(int i=0;i<word.length();i++){
            if(node->dict[word[i]-'a']==nullptr){
                node->dict[word[i]-'a'] = new TrieNode();
            }
            node = node->dict[word[i]-'a'];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(int i=0; i < word.size(); i++){
            if(node->dict[word[i]-'a']==nullptr){
                return false;
            }
            node = node->dict[word[i]-'a'];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(int i=0;i<prefix.length();i++){
            if(node->dict[prefix[i]-'a']==nullptr)
                return false;
            node = node->dict[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end

