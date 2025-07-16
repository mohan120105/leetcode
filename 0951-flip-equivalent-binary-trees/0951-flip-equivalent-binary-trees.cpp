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
    bool equal(TreeNode* p, TreeNode* q){
        if(!p && !q)return true;
        if(!p||!q || p->val!=q->val)return false;
        // if(p->val ==q->val)return true;
        bool nor = equal(p->left,q->left)&&equal(p->right,q->right);
        bool flip = equal(p->right,q->left)&& equal(p->left,q->right);
        return  nor||flip; 
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return equal(root1,root2);
    }
};