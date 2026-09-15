#include <iostream>
using namespace std;

class Node{
public: 
  int value;
  Node* next; 

  Node(int val){
    value = val;
    next = nullptr;
  }
};

class list{
private:
  Node* head;
  Node* tail;

public:
  list(){
    head = nullptr;
    tail = nullptr;
  }

    void push_front(int value) {
      Node* newNode = new Node(value);
      if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
      }
      else{
        newNode->next = head;
        head = newNode;
      }
    }

    void push_back(int value) {
      Node* newNode = new Node(value);
      if(head == nullptr){
        head = newNode;
        tail = newNode;
      }
      else {
        tail->next = newNode;
        tail = newNode;
      }
    }

    void pop_front(){
      Node* temp = head;
      head = head->next;
      delete temp; 
    }
    
    void pop_back() {
      if(head == tail){
        delete tail;
        head = nullptr;
        tail = nullptr;
        return;
      }
      else{
      Node* temp = head;

      while(temp->next != tail){
        temp = temp->next;
      }
      temp->next = nullptr;
      delete tail;
      tail = temp;

      }
    }

    void insert(int value, int index) {
      if(index < 0){
        cout << "invalid index";
        return;
      }

      if(index == 0) {
        push_front(value);
        return;
      }

     Node* newNode = new Node(value);
     Node*temp = head;
     
     for(int i=0; i<index-1; i++) {
      temp = temp->next;
     }
     newNode->next = temp->next;
     temp->next = newNode;
    
     // If inserted at end, update tail
    if (newNode->next == nullptr) {
        tail = newNode;
    }
    }

    int find(int value){
      Node* temp = head;
      int idx = 0;

      while(temp != nullptr){
        if(temp->value == value) {
        return idx;
        }
        temp = temp->next;
        idx++;
      }
      return -1;
    }

    void print_list() {
      Node* temp = head;
      
      while(temp != nullptr){
        cout << temp->value << endl;
        temp = temp->next;
      }
    }
};

int main()
{ 
  list l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_back(4);
  l.insert(5, 2);

  l.print_list();
  int value = 2;
  cout << "index of " << value << " is: " << l.find(2);
}