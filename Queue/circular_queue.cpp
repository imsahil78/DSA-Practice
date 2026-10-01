/*
 * Problem: Design Circular Queue
 * Time Complexity: O(1)
 * Space Complexity: O(n)
 */

class MyCircularQueue {
private: 
    int front;
    int rear;
    int capacity;
    int size;
    vector<int> arr;

public:
    MyCircularQueue(int k) {
        rear = -1;   // last element
        front = 0;   // points to first element
        capacity = k;
        size = 0;     // store current size 1 2 3 = size-3 ; _ 2 3 = size-2
        arr.resize(k);

    }
    
    bool enQueue(int value) {
        if(size == capacity) {
            return false;
        }   
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
        return true;

    }
    
    bool deQueue() {
        if(size == 0) {
            return false;
        }
        front = (front + 1) % capacity;
        size--;
        return true;
    }
    
    int Front() {
        if(size == 0) {
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(size == 0) {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if(size == 0) {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(size == capacity) {
            return true;
        }
        return false;
    }
};
