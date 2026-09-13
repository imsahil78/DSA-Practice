// Problem: Reverse Linked List

// Approach: Iterative

// Time Complexity: O(N)

// Space Complexity: O(1)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* before = nullptr;

        while(current != nullptr) {
            ListNode* after = current->next;
            current->next = before;
            before = current;
            current = after;
        }return before;
    }
};