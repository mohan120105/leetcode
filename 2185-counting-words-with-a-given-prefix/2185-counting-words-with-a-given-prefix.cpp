class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(string s:words){
            if(s.length()>=pref.length()){
                if(pref==s.substr(0,pref.length())){
                    c++;
                }
            }
        }
        return c;
        
    }
};