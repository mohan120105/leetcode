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
    int height(TreeNode* root,int &dia){
        if(!root)return 0;
        int l = height(root->left,dia);
        int r = height(root->right,dia);
        
        dia = max(dia,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        height(root,dia);
        
        return dia;
    }
    // int height(TreeNode* root,int dia){
    //     if(!root)return -1;
    //     int l = height(root->left);
    //     int r = height(root->right);
        
    //     dia = max(dia,l+r);
    //     return dia;
    // }
};