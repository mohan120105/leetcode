class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        int max_c=0,c=0;
        bool has=false;
        for(auto i:freq){
            if(i.second%2==0){
                c+=i.second;
            }
            else{
                // max_c = max(max_c,i.second);
                c+=i.second-1;
                has = true;
            }
        }
        if(has){
            c++;
        }
        return c;
    }
};