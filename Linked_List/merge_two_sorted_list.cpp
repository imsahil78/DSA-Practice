// Problem: Merge Two Sorted Lists
// Approach: Recursion
// Time Complexity: O(N + M)
// Space Complexity: O(N + M)


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == nullptr) return head2;
        if(head2 == nullptr) return head1;

        if(head1->val <= head2->val) {
            head1->next = mergeTwoLists(head1->next, head2) ;
            return head1;
        }

        else {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
};