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
int preindex=0;
    TreeNode* tree(vector<int>& preorder, vector<int>& inorder,int st,int end,unordered_map<int,int>&freq){
        if(st>end)return nullptr;
        int val = preorder[preindex++];
        TreeNode* root = new TreeNode(val);
        int index = freq[val];
        root->left = tree(preorder,inorder,st,index-1,freq);
        root->right = tree(preorder,inorder,index+1,end,freq);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>freq;
        for(int i=0;i<inorder.size();i++){
            freq[inorder[i]] = i;
        }
        return tree(preorder,inorder,0,inorder.size()-1,freq);
    }
};