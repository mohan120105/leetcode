class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=0;
        int max_c=0;
        for(string s:sentences){
            stringstream ss(s);
            string word;
            while (ss >> word) {
                c++;
            }
            max_c = max(max_c,c);
            c=0;
        }
        return max_c;

        
        
    }
};