// Problem: Reverse Nodes in K-Group

// Approach: Recursion

// Time Complexity: O(N)

// Space Complexity: O(N)

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        //check if k exist in list
        for(int i=0; i<k; i++) {
            if(temp == nullptr) {
                return head;
            }
            temp = temp->next;
        }
        ListNode* current = head;
        ListNode* before = nullptr;
        
        //rev list
        for(int i=0; i<k; i++) {
            ListNode* after = current->next;
            current->next = before;
            before = current;
            current = after;
        }

        head->next = reverseKGroup(current, k); //head has become tail now

        return before;  // before become new head
        

    } 
};