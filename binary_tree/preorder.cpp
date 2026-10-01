//Problem: Binary Tree Preorder Traversal
//Time: O(n)  
//Space:O(h) — recursion stack, where h = tree height

class Solution {
public:
    void preorder(TreeNode* root, vector<int> &ans) {
        if(root == nullptr) {
            return;
        }
        ans.push_back(root->val);      //root
        preorder(root->left, ans);     //left
        preorder(root->right, ans);    //right
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;

    }
};