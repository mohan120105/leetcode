class Solution {
public:
    string reverseVowels(string s) {
        // unordered_map<int,char>freq;
        vector<char>v;
        string str = "aeiouAEIOU";
        for(int i=0;i<s.length();i++){
            if(str.find(s[i])!=string::npos){
                v.push_back(s[i]);
            }
        }
        for(int i=0;i<s.length();i++){
            if(str.find(s[i])!=string::npos){
                s[i] = v[v.size()-1];
                v.pop_back();
            }
        }
        return s;
        
    }
};