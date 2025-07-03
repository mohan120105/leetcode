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
    vector<TreeNode*> dfs(int st,int end){
        vector<TreeNode*>res;
        if(st>end){
            res.push_back(NULL);
            return res;
        }
        for(int i=st;i<=end;i++){
            auto left = dfs(st,i-1);
            auto right = dfs(i+1,end);
            for(auto l:left){
                for(auto j:right){
                    TreeNode* root= new TreeNode(i);
                    root->left = l;
                    root->right=j;
                    res.push_back(root);
                }
                
            }

        }
        return res;
        
    }
    vector<TreeNode*> generateTrees(int n) {
        if(n==0)return {};
        return dfs(1,n);
    }
};