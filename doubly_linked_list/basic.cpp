#include<iostream>
using namespace std;

class Node {
public :  
  int value;
  Node* next;
  Node* prev;
 
  Node(int value) {
    this->value = value;
    next = nullptr;
    prev = nullptr;
  }
};

class List {
private: 
  Node* head;
  Node* tail;

public:
  List() {
    head = nullptr;
    tail = nullptr;
  }

  void push_front(int value) {
    Node* newNode = new Node(value);
    if(head == nullptr) {
      head = newNode;
      tail = newNode;
      return;
    }

    else {
      newNode->next = head;
      newNode->prev = nullptr;

      head->prev = newNode;
      head = newNode;
    }
  }

  void push_back(int value) {
    Node* newNode = new Node(value);

    if(head == nullptr) {
      head = newNode;
      tail = newNode;
    }

    else {
      tail->next = newNode;
      newNode->prev = tail;
      newNode->next = nullptr;
      tail = newNode;
    }
  }
  
  void pop_front() {
    if(head == tail) {
      delete head;
      head = nullptr;
      tail = nullptr;
      return;
    }

   else {
    Node* temp = head->next;
    temp->prev = nullptr;
    delete head;
    head = temp;
   }
  }

  void pop_back() {
    if(head == tail) {
      delete head;
      head = nullptr;
      tail = nullptr;
    }

    else {
      Node* temp = tail->prev;
      temp->next = nullptr;
      delete tail;
      tail = temp; 
    }
  }

  void print_list() {
    Node* temp = head;

    while(temp != nullptr) {
      cout << temp->value << " " ;
      temp = temp->next;
    }
  }

  Node* gethead() {
    return head;
  }

  Node* gettail() {
    return tail;
  }
};


int main() {

List l1;

l1.push_front(1);
l1.push_front(2);
l1.push_back(5);
l1.push_back(6);
l1.pop_front();
l1.pop_back();

l1.print_list();
cout << endl;

cout << "head: " << l1.gethead()->value << endl;
cout << "tail: " << l1.gettail()->value << endl;;

}