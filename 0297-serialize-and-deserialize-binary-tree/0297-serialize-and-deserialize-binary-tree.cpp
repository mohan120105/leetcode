/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // string res="";
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)return "#,";
        return to_string(root->val)+","+serialize(root->left)+serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* dese(queue<string>&q){
        string k = q.front();
        q.pop();
        if(k=="#"){
            return nullptr;
        }
        TreeNode* node = new TreeNode(stoi(k));
        node->left = dese(q);
        node->right = dese(q);
        return node;
    }
    TreeNode* deserialize(string data) {
        queue<string>q;
        stringstream ss(data);
        string token;
        while(getline(ss,token,',')){
            q.push(token);
        }
        return dese(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));