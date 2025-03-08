class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(palindrome(s)){
                return s;
            }
        }
        return "";
    }

    bool palindrome(string s){
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};