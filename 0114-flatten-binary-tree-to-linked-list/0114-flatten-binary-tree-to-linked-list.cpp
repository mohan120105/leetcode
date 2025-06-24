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
    
    void flatten(TreeNode* root) {
        stack<TreeNode*>st;
        if(!root)return;
        st.push(root);
        // TreeNode* node = new TreeNode();
        while(!st.empty()){
            auto next = st.top();
            st.pop();
            
            
            if(next->right){
                st.push(next->right);
            }
            if(next->left){
                st.push(next->left);
            }
            if(!st.empty())
            next->right = st.top();
            next->left = nullptr;
        }
        
    }
};