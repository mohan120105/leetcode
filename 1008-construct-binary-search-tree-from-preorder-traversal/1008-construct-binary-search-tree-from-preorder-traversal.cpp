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
    int idx = 0;
    TreeNode* preorderT(vector<int>&preorder,int lower, int upper){
        if(idx>=preorder.size())return nullptr;
        int val = preorder[idx];
        if(val<lower || val>upper)return nullptr;
        TreeNode* root = new TreeNode(val);
        idx++;
        root->left = preorderT(preorder,lower,val-1);
        root->right = preorderT(preorder,val+1,upper);
        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return preorderT(preorder,INT_MIN,INT_MAX);
    }
};