class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>freq;
        char ch=' ';
        for(char c:s){
            freq[c]++;
            if(freq[c]==2){
                ch = c;
                break;
            }
        }
        return ch;
    }
};