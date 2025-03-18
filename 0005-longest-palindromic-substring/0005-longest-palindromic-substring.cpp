class Solution {
public:

    string substring(string s,int left,int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {

        string ans="";
        for(int i=0;i<s.length();i++){
            string odd_pal = substring(s,i,i);
            string even_pal  = substring(s,i,i+1);
            if(odd_pal.length()>ans.length())ans = odd_pal;
            if(even_pal.length()>ans.length())ans = even_pal;
        }
        return ans;
        
        
    }
};