#include <iostream>
#include <vector>
using namespace std;

class Stack {
  vector<int> vec;

public:
  void push(int val) {
    vec.push_back(val);
  }
  
  void pop() {
    vec.pop_back();
  }

  int top() {
    return vec[vec.size() - 1];
  }

  bool empty() {
    return vec.size() == 0;   // vec.size = no of element, it start from 1 2 3... not 0, 0 is index
  }

  void print() {
    for(auto p : vec) {
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
  s1.print();


  cout << "top: "<<s1.top() << endl;

  s1.pop();

  cout << "top: " << s1.top() <<endl;

  s1.pop();
  s1.pop();

  cout << s1.empty();


  return 0;
}