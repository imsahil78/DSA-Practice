// Problem: Linked List Cycle II
// Approach: Fast and Slow Pointer
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast != nullptr &&  fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                isCycle = true;
                break;
            }
        }
        if(isCycle == false) {
            return nullptr;
        }

        slow = head;

        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        } 
        return slow;
    }
};