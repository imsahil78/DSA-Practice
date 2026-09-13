// Problem: Middle of the Linked List
// Approach: Fast and Slow Pointer
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=nullptr && fast->next!=nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        } return slow;
    }
};