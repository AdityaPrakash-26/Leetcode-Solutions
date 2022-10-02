/*
Accepted
37/37 cases passed (279 ms)
Your runtime beats 55.72 % of cpp submissions
Your memory usage beats 86.55 % of cpp submissions (79.7 MB)
*/

/*
 * @lc app=leetcode id=895 lang=cpp
 *
 * [895] Maximum Frequency Stack
 */

// @lc code=start
class FreqStack {
public:
    unordered_map<int, int> fmap;
    vector<vector<int>> fstack = {{}};
    
    void push(int x) {
        int freq = fmap[x] + 1;
        fmap[x] = freq;
        if (freq == fstack.size()) fstack.push_back(vector<int>());
        fstack[freq].push_back(x);
    }
    
    int pop() {
        int x = fstack.back().back();
        fstack.back().pop_back();
        if (fstack.back().empty()) fstack.pop_back();
        fmap[x]--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
// @lc code=end

