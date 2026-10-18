// Problem: Balanced Binary Tree*
// Approach: Use recursion to calculate subtree heights and check balance*
// Condition: abs(left - right) <= 1 for every node*
// Time: O(n)*
// Space: O(h) — recursive stack, h = height of tree*

class Solution {
public:
        bool isBalanced(TreeNode* root) {
            return height(root) != -1;
    }
        int height(TreeNode* root) {
            if(root == nullptr) return 0;

            int left = height(root -> left);
            if(left == -1) return -1;

            int right = height(root -> right);
            if(right == -1) return -1;

            if(abs(left - right) > 1) return -1;

            return max(left, right) + 1;
    }
};