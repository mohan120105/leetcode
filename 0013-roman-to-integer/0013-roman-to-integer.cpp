class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        
        unordered_map<char,int>roman={{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
        int prev=roman[s[s.length()-1]];
        int curr=roman[s[s.length()-1]];
        for(int i=s.length()-1;i>=0;i--){
            curr  = roman[s[i]];
            if(prev>curr){
                ans -=curr;
            }
            else{
                ans+=curr;
            }
            prev = curr;
        }
        return ans;
    }
};