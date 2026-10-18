
// Problem: Diameter of Binary Tree
// Time: O(n)
// Space: O(h) — recursive stack, h = height of tree


class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        height(root, maxi);
        return maxi;
    }
    int height(TreeNode* root, int &maxi) {
        if(root == nullptr) return 0;

        int left = height(root->left, maxi);
        int right = height(root->right, maxi);
        maxi = max(maxi, left + right);

        return  max(left, right) + 1;
    }
};