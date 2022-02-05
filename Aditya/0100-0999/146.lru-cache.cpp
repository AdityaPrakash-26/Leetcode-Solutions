/*
Accepted
22/22 cases passed (388 ms)
Your runtime beats 86.84 % of cpp submissions
Your memory usage beats 86.08 % of cpp submissions (165 MB)
*/

/*
 * @lc app=leetcode id=146 lang=cpp
 *
 * [146] LRU Cache
 */

// @lc code=start
class LRUCache {
public:
    list<pair<int,int>> l;
    unordered_map<int,list<pair<int, int>>::iterator> hash;
    int size;

    LRUCache(int capacity){
        size = capacity;
    }

    int get(int key){
        if(hash.find(key) == hash.end()) {
            return -1;
        }

        l.splice(l.begin(), l, hash[key]); // put the node at the beginning

        return hash[key]->second;
    }

    void put(int key, int value){
        if(hash.find(key) != hash.end()) {
            l.splice(l.begin(), l, hash[key]);
            hash[key]->second = value;
            return;
        }

        if(l.size()==size){
            auto d_key = l.back().first;
            l.pop_back();
            hash.erase(d_key);
        }

        l.push_front({key,value});

        hash[key] = l.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end

