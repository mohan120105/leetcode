class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='['||c=='{'||c=='('){
                st.push(c);
            }
            else if(c==']'||c=='}'||c==')'){
                if(!st.empty()&&st.top()=='['&&c==']'){
                    st.pop();
                }
                else if(!st.empty()&&st.top()=='{'&&c=='}'){
                    st.pop();
                }
                else if(!st.empty()&&st.top()=='('&&c==')'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};