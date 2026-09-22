// Problem: Flatten a Multilevel Doubly Linked List

// Approach: Recursion

// Time Complexity: O(N²)

// Space Complexity: O(N)

class Solution {
public:
    Node* flatten(Node* head) {
        Node* current = head;

        while(current != nullptr) {
            
            if(current->child != nullptr) {
                Node* nxt = current->next;                  //store nxt pointer
                current->next = flatten(current->child);    // first flatten list
                
                current->next->prev = current  ;
                current->child = nullptr;

                Node* temp = current->next ;               // child value = temp
                while(temp->next != nullptr) {
                    temp = temp->next;
                }
                        temp->next = nxt;
                        if(nxt != nullptr) {
                         nxt->prev = temp;
                        }

                   
            }
             current = current->next;
        } return head;
    }
};