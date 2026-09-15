// Problem: Linked List Cycle
// Approach: Fast and Slow Pointer
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=nullptr && fast->next!=nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) return true;

        } return false;
    }
};