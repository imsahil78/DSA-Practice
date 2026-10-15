// Problem: Binary Tree Postorder Traversal
// Approach: Use 2 stacks: s1 → process, s2 → reverse order
// Order: Left → Right → Root
// Time: O(n)
// Space: O(n)

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s1, s2;  //s1 store left right, s2 store ans
        vector<int> ans;
        if (root == nullptr) return ans;

        TreeNode* current = root;
        s1.push(current);
        
        while(!s1.empty()) {
            TreeNode* node = s1.top();
            s1.pop();
            s2.push(node);

            if(node->left) {
                s1.push(node->left);
            }

            if(node->right) {
                s1.push(node->right);
            }
            
        }

        while(!s2.empty()) {
            ans.push_back(s2.top()->val);  // store s2 ans
            s2.pop();
        }
        return ans;
    }
};