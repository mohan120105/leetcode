class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,c=0,max_c=0;
        unordered_set<char>se;
        while(j<s.length()){
            if(se.find(s[j])==se.end()){
                se.insert(s[j]);
                
                max_c = max(max_c,j-i+1);  
                j++; 

            }
            else {
                se.erase(s[i]);
                i++;
            }
            
            // se.insert(s[j]);
        }
        return max_c;
    }
};