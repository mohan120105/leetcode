class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>freq;
        for(char r:s){
            freq[r]++;
        }
        for(char c:t){
            freq[c]--;
        }
        for(auto i:freq){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};