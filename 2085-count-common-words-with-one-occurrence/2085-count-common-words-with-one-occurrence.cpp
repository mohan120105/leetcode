class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>freq1;
        unordered_map<string,int>freq2;
        int c=0;
        for(string s:words1){
            freq1[s]++;
        }
        for(string s:words2){
            freq2[s]++;
        }

        for(string s:words1){
            if(freq1[s]==1 && freq2[s]==1){
                c++;
            }
        }
        return c;


    }
};