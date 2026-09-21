#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Stack {
  list<int> l;

public :
  void push(int val) {
    l.push_front(val);
  }
  void pop() {
    l.pop_front();
  }
  int top() {
    return l.front();
  }

  bool empty() {
    return l.empty();
  }

  void print() {
    for(auto p : l) {
      cout << p << " ";
    }
    cout << endl;
  }
};

int main() {

  Stack s1;
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);

  s1.print();

  cout << "top1: " <<  s1.top() << endl;

  s1.pop();
  s1.pop();

  cout << "top2: " <<  s1.top() << endl;

  while(!s1.empty()) {
    s1.pop();
  }

  cout << "empty: " << s1.empty();



  return 0;
}