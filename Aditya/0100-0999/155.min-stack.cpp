/*
Accepted
31/31 cases passed (20 ms)
Your runtime beats 81.28 % of cpp submissions
Your memory usage beats 5.12 % of cpp submissions (24.7 MB)
*/

/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:
    int minStack[30000] = {0};
    int stack[30000] = {0};
    int size = -1;

    MinStack() {}
    
    void push(int val) {
        size++;
        stack[size] = val;
        
        if(size >= 1){
            minStack[size] = min(val, minStack[size - 1]);
        } else {
            minStack[size] = val;
        }
    }
    
    void pop() {
        size--;
    }
    
    int top() {
        return stack[size];
    }
    
    int getMin() {
        return minStack[size];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

