class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        int pro;
        for(char i:s){
            if(i==letter){
                c++;
            }
        }
        pro = (c*100/s.length());
        // int res = pro;
        return pro;
        
    }
};