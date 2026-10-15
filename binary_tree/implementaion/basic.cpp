#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
  public :
    int data;
    Node* left;
    Node* right;

  Node(int val) {
    this->data = val;
    left = right = nullptr;
  }
};

int main() {

  Node* root = new Node(5);
  root->left = new Node(3);
  root->right = new Node(6);
  root->left->right = new Node(4);
  
  return 0;
}