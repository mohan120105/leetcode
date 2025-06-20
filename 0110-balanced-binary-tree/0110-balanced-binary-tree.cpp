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
    int balance(TreeNode* root){
        if(!root)return 0;
        int left = balance(root->left);
        if(left==-1)return -1;
        int rig = balance(root->right);
        if(rig==-1)return -1;
        if(abs(left-rig)>1)return -1;
        return 1+max(left,rig);
    }
    bool isBalanced(TreeNode* root) {
        if(balance(root)!=-1)return true;
        return false;
    }
};