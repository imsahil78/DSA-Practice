/*
// Problem: Copy List with Random Pointer

// Approach: Hash Map

// Time Complexity: O(N)

// Space Complexity: O(N)
*/

class Solution {
public:
    Node* copyRandomList(Node* oldhead) {
    
    if (oldhead == nullptr) {
        return nullptr;
    }

    unordered_map<Node*, Node*> m;
    Node* newhead = new Node(oldhead->val);
    m[oldhead] = newhead;
    Node* oldtemp = oldhead->next;
    Node* newtemp = newhead;


    while(oldtemp != nullptr) {
        Node* copyNode = new Node(oldtemp->val);
        newtemp->next = copyNode;
        m[oldtemp] = copyNode;
        oldtemp = oldtemp->next;
        newtemp = newtemp->next; 
    }
    
    //copy random pointer
    oldtemp = oldhead;
    newtemp = newhead;

    while(oldtemp != nullptr) {
        newtemp->random = m[oldtemp->random];
        oldtemp = oldtemp->next;
        newtemp = newtemp->next;
    }
    return newhead;
    }

};