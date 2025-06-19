/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
   
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int c = q.size();
            vector<int>r;
            for(int i=0;i<c;i++){
                auto curr=q.front();
                q.pop();
                if(curr==nullptr)return res;
                r.push_back(curr->val);
                for(auto cut:curr->children){
                    q.push(cut);
                }
            }
            res.push_back(r);

        }
        return res;
    }
};