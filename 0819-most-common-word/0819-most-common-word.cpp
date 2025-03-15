class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int>freq;
        string r= "";
        unordered_set<string>banned_set(banned.begin(),banned.end());
        for(char &c:paragraph){
            if(isalpha(c)){
                c=tolower(c);
            }
            else{
                c=' ';
            }
        }

        stringstream ss(paragraph);
        string word;
        string result;
        int count=0;
        int max_c = 0;
        while(ss>>word){
            if(banned_set.find(word)==banned_set.end()){
                freq[word]++;
                if(freq[word]>count){
                    count = freq[word];
                    result = word;
                }
            }
        }
        return result;
        
    }
};