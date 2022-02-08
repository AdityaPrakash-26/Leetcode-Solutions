class WordDictionary {

public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        words[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for(auto searchQuery : words[word.size()]){
            if(isWordEqual(word, searchQuery)){
                return true;
            }
        }
        return false;
    }

private:
    unordered_map<int, vector<string>> words;
    bool isWordEqual(string a, string b){
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '.') continue;
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */