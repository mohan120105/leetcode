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
    bool valid(TreeNode* root,long min_v,long max_v){
        if(!root)return true;
        if((min_v>=root->val)||(max_v <= root->val)){
            return false;
        }
        return valid(root->left,min_v,root->val)&&
               valid(root->right,root->val,max_v);
        
    }
    bool isValidBST(TreeNode* root) {
        long min_v = INT_MIN;
        long max_v = INT_MAX;
        return valid(root,min_v,max_v);
    }
};