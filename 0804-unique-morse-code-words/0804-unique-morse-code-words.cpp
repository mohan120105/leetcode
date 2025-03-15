class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v({".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."});
        unordered_map<char,string>freq;
        int c=97;
        for(string i:v){
            freq[char(c)] = i;
            c++;
        }
        set<string>g;
        for(string i:words){
            string str="";
            for(char l:i){
                str+=freq[l];
            }
            g.insert(str);
        }
        return g.size();
    }
};