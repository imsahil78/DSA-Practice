#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
  public :
    int data;
    Node* next;

  Node(int val) {
    this->data = val;
    next = nullptr;
  }
};

class Queue {
  private :
    Node* head;
    Node* tail;

  public :
  Queue() {
    head = tail = nullptr;
  }

  void push(int val) {
    Node* newNode = new Node(val);
    
    if(empty()) {
      head = tail = newNode;
    }
    else {
    tail->next = newNode;
    tail = newNode;
    }
  }

  void pop() {
    if(empty()) {
      cout << "ll is empty ";
      return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;
    
     // If queue becomes empty
        if (head == nullptr) {
            tail = nullptr;
        }
  }

  int front() {
    return head->data;
  }

  int back() {
    return tail->data;
  }

  bool empty() {
    return head == nullptr;
  }
};

int main() {

Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop();

    cout << "After pop:" << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

  return 0;
}