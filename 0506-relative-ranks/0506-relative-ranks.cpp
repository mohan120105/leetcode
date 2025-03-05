class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>s = score;
        vector<string>v;
        sort(s.rbegin(),s.rend());
        unordered_map<int,string>freq;
        int j=1;
        for(int i=0;i<s.size();i++){
            if(i==2){
                freq[s[i]] = "Bronze Medal";
            }
            else if(i==1){
                freq[s[i]] = "Silver Medal";
            }
            else if(i==0){
                freq[s[i]] = "Gold Medal";
            }
            else{
                freq[s[i]] = to_string(i+1);
            }
        }
        for(int i:score){
            v.push_back(freq[i]);
        }
        return v;
        
    }
};