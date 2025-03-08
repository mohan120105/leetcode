class Solution {
public:
    bool checkString(string s) {
        stack<char>st;
        for(char c:s){
            if(!st.empty() &&st.top()=='b'&&c=='a'){
                return false;
            }
            st.push(c);
        }
        return true;
        
    }
};