//Problem: Binary Tree Preorder Traversal
//Approach:Use stack. Pop node, store value, push right then left.
//Time: O(n)
//Space: O(n)

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;

        if(root == nullptr) return ans;

        s.push(root);

        while(!s.empty()) {
            TreeNode* curr_head = s.top();
            s.pop();
            ans.push_back(curr_head->val);
            
            if(curr_head->right != nullptr) {
                s.push(curr_head->right);
            }

            if(curr_head->left != nullptr) {
                s.push(curr_head->left);
            }
        }
        return ans;

    }
};