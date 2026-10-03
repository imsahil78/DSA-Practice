//Problem: Binary Tree Inorder Traversal
//Approach: Stack
//Time: O(n)
//Space: O(n)

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* current = root;
        vector<int> ans;

        while(current != nullptr || !s.empty()) {

            while(current != nullptr) { // go left
                s.push(current);
                current = current->left;
            }

            TreeNode* node = s.top(); // store root
            s.pop();
            ans.push_back(node->val); 
 
            current = node->right;  // go right
        } 
        return ans;
    }
};