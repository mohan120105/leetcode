class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(char i:s){
            if(isalnum(i)){
                k+=i;
            }
        }
        // string l = k;
        int i=0;
        int j = k.size()-1;
        while(i<=j){
            if(k[i]==k[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        // reverse(k.begin(),k.end());
        // if(k==l)return true;
        return true;
    }
};