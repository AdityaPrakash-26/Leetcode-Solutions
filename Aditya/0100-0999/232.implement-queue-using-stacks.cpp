/*
Accepted
21/21 cases passed (6 ms)
Your runtime beats 5.14 % of cpp submissions
Your memory usage beats 48.04 % of cpp submissions (7.1 MB)
*/

/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }

    s1.push(x);

    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x=s2.top();
        s2.pop();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        return s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

