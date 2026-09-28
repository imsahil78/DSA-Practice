#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue {
  private :
    list<int> l;

  public :
    void enqueue(int val) {
      l.push_back(val);
    }

    void dequeue() {
      l.pop_front();
    }

    int front() {
      return l.front();
    }

    int back() {
      return l.back();
    }
};

int main() {

  Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.dequeue();

    cout << "After dequeue:" << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;


  return 0;
}

