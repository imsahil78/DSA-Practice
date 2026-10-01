//Problem: Binary Tree Postorder Traversal
//Time: O(n)  
//Space:O(h) — recursion stack, where h = tree height

class Solution {
public:
    void postorder(TreeNode* root, vector<int> &ans) {
        if(root == nullptr) {
            return;
        }
        postorder(root->left, ans);   // left
        postorder(root->right, ans);  // right
        ans.push_back(root->val);     // root
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
};