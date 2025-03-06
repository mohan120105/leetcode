class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        for(char s:columnTitle){
            res = res*26+(s-'A'+1);
        }
        return res;
        
    }
};