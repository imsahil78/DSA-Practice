// Problem: Maximum Depth of Binary Tree
// Approach: Use recursion to find the depth of left and right subtrees
// Order: Left → Right → Root
// Time: O(n)
// Space: O(h) — recursive stack, h = height of tree

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        
        int left = maxDepth(root -> left);
        int right = maxDepth(root -> right);

        return max(left, right) + 1;
    }
};