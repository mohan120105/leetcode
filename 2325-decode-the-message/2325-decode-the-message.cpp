class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>freq;
        unordered_set<char>se;
        int j=0;
        for(char c:key){
            if(c!=' ' && se.find(c)==se.end()){
            freq[c] = char('a'+j);
            se.insert(c);
            j++;
            if(j==26)break;
            }
        }
        string s="";
        for(char ch:message){
            if(ch==' '){
                s+=ch;
            }
            else{
                s+=freq[ch];
            }
        }
        return s;
    }
};