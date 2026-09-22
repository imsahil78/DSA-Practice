// Problem: Stock Span
// Approach: Stack
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> price = {100, 80, 60, 70, 60, 75, 85};  // stock price
  
  stack<int> s;
  vector<int> vec;
  int ans;

  for(int i=0; i<price.size(); i++) {

    while(s.size() !=0 && price[s.top()] <= price[i]) {
      s.pop(); 
    }

    if(s.empty()) {       // occur for 1st element and when the val is greatet and each val is pop from the stack 
      ans = i + 1;
      vec.push_back(ans);
    }
    else {
      ans = i - s.top();
      vec.push_back(ans);

    }
    s.push(i);
  }

  for(auto p : vec) {
    cout << p << " ";
  }

  return 0;
}