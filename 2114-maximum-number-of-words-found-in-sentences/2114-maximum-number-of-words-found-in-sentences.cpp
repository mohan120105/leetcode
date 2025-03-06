class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=0;
        int max_c=0;
        for(string s:sentences){
            c = count(s.begin(),s.end(),' ')+1;
            max_c = max(max_c,c);
        }
        return max_c;

        
        
    }
};