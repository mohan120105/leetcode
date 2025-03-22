class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s = "";
        for(int i=0;i<n;i++){
            s+='('+')';
        }
        vector<string>result;
        string curr;
        backtrack(0,0,curr,result,s,n);
        return result; 
    }
    void backtrack(int open,int close,string &curr,vector<string> &result,string &s,int n){
        if(curr.length()==2*n ){
            result.push_back(curr);
            return;
        }
        if(open<n){
            curr.push_back('(');
        backtrack(open+1,close,curr,result,s,n);
        curr.pop_back();
        }
        if(close<open){
            curr.push_back(')');
        backtrack(open,close+1,curr,result,s,n);
        curr.pop_back();
        }  

    }
    
    
};