
/*
    Problem: Implement Stack using Two Queues
    Time Complexity:
    push()  -> O(n)
    pop()   -> O(1)
    top()   -> O(1)
    empty() -> O(1)
    Space Complexity:
    O(n)
*/

// logic : queue=123 stack=321  reverse of queue because in stack push frm front in queue frm end
class MyStack {
private :
    queue<int> q1;  // orignal queue      1   __     2   21
    queue<int> q2; //  copy q1 element    _    1     1   ___

public:
    MyStack() {
    }
    
    void push(int x) {
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);

        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
