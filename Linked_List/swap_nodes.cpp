// Problem: Swap Nodes in Pairs

// Approach: Recursion

// Time Complexity: O(N)

// Space Complexity: O(N)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* after = head->next;
        ListNode* remaning = after->next;
        after->next = head;

        head->next = swapPairs(remaning);
        return after;
          

        
    }
};