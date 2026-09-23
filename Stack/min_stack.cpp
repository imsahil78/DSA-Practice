// Problem: Min Stack
// Approach: Stack of Pairs
// Time Complexity: O(1) for push, pop, top, and getMin
// Space Complexity: O(N)

class MinStack {
public:
    stack<pair<int, int>> s;
    MinStack() {

    }
    
    void push(int value) {
        if(s.empty()) {
            s.push({value, value});
        }
        else {
            int minVal = min(s.top().second, value);
            s.push({value, minVal});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
       return s.top().first; 
    }
    
    int getMin() {
        return s.top().second;
    }
};
