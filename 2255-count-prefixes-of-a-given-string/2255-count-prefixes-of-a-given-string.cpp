class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        for(string str:words){
            if(s.substr(0,str.length())==str){
                c++;
            }
        }
        return c;
    }
};