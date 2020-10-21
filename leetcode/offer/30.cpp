///////////////////////////////////////////////////////////////
// File Name: 30.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-21 20:04:23
// Description:
///////////////////////////////////////////////////////////////
class MinStack {
private:
    int cur;
    int stack[20000 + 5] = {0};

public:
    /** initialize your data structure here. */
    MinStack() {

        cur = -1;
    }
    
    void push(int x) {
        cur++;
        stack[cur] = x;
    }
    
    void pop() {
        if(cur == -1) return ;
        cur--;
    }
    
    int top() {

        return stack[cur];
    }
    
    int min() {
        int min1 = top();
        for(int i = 0; i <= cur; i ++) {
            if(min1 > stack[i]) {
                min1 = stack[i];
            }
        }

        return min1;
    }


};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
