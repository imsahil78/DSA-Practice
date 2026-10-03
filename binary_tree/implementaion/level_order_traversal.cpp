//Problem: Binary Tree Level Order Traversal
//Time:O(n)  
//Space:O(n) — queue + answer

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; //store ans
        queue<TreeNode*> q;      //store nodes of TreeNode

        if(root == nullptr) return ans; 

        q.push(root);

        while(!q.empty()) {
            int n = q.size(); // store no of node in one level
            vector<int> level;       //store level wise node

            for(int i=0; i<n; i++) {
                TreeNode* curr_head = q.front();
                q.pop();
                if(curr_head->left != nullptr) q.push(curr_head->left);
                if(curr_head->right != nullptr) q.push(curr_head->right);
                level.push_back(curr_head->val);
            }
            ans.push_back(level);
        } return ans;
    }
};