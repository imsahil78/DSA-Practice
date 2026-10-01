
/*
    Problem: Implement Queue using Two Stack
    Time Complexity:
    push()  -> O(n)
    pop()   -> O(1)
    peek()   -> O(1)
    empty() -> O(1)
    Space Complexity:
    O(n)
*/

// logic : queue=123 stack=321  reverse of queue because in stack push frm front in queue frm end

class MyQueue {
private :
    stack<int> s1;   // orignal stack      1   __     2   12
    stack<int> s2;  //copy q1 element      _   1      1   ___

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);

        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }    
    }
    
    int pop() {
        int a = s1.top();
        s1.pop();
        return a;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};
