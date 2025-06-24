/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(!root)return res;
        q.push(root);
        bool j=true;
        while(!q.empty()){
            int k = q.size();
            vector<int>v(k);
            for(int i=0;i<k;i++){
                
                auto curr = q.front();
                q.pop();
                int index = j?i:k-i-1;
                v[index] = curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            
            res.push_back(v);
            j = !j;
            
            
        }
        return res;
    }
};