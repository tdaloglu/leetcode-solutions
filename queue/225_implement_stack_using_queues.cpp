#include <queue>

using namespace std;

class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int num = 0;
        while (1) {
            num = q1.front();
            q1.pop();
            if (q1.empty()) break;
            q2.push(num);
        }

        while (!q2.empty()) {
            int i = q2.front();
            q2.pop();
            q1.push(i);
        }

        return num;
    }
    
    int top() {
        int num = 0;
        while (!q1.empty()) {
            num = q1.front();
            q1.pop();
            q2.push(num);
        }

        while (!q2.empty()) {
            int i = q2.front();
            q2.pop();
            q1.push(i);
        }

        return num;
    }
    
    bool empty() {
        if (q1.empty()) return true;
        else return false;
    }
    queue<int> q1;
    queue<int> q2;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */