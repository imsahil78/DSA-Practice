//Problem: Binary Tree Inorder Traversal
//Time: O(n)  
//Space:O(h) — recursion stack, where h = tree height

class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans) {
        if(root == nullptr) {
            return;
        }
        inorder(root->left, ans);             //left
        ans.push_back(root->val);             //root
        inorder(root->right, ans);            //right
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);        
        return ans;
    }
};