///////////////////////////////////////////////////////////////
// File Name: 9.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-17 16:50:12
// Description:
///////////////////////////////////////////////////////////////
class CQueue {

    stack<int> a;
    stack<int> b;
public:

    CQueue() {

    }
    
    void appendTail(int value) {

        a.push(value);
    }
    
    int deleteHead() {

        if(a.size() == 0) return -1;

        int size = a.size();

        while(size--) {
            
            int tmp = a.top();
            a.pop();
            b.push(tmp);
        }

        int res = b.top();
        b.pop();

        size = b.size();
        while(size--) {
            
            int tmp = b.top();
            b.pop();
            a.push(tmp);
        }

        return res;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
