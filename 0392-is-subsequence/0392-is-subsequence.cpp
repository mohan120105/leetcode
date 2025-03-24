class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i=0,j=0;
        int k=0;
        while(k<s.length() && i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
                k++;
            }
            j++;
        }
        if(k==s.length())return true;
        return false;
        
    }
};