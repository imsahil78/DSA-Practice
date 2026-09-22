#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> vec = {3, 1, 0, 8, 6};
  stack<int> s;
  vector<int> ans;

  for(int i=0; i<vec.size(); i++) {

    while(s.size() != 0 && s.top() >= vec[i]) {
      s.pop();
    }
    if(s.size() == 0) {
      ans.push_back(-1);
    }
    else {
      ans.push_back(s.top());
    }
    s.push(vec[i]);
  }

  for(auto p : ans) {
    cout << p << " ";
  }





}