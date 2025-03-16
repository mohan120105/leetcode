class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        string res="";
        for(char c:s){
            if(c=='|'){
                count++;
            }
            if(count==2 ||count==0){
                res+=c;
                // count=0;
            }
            if(count==2){
                count=0;
            }
            
        }
        int k=0;
        for(char d:res){
            if(d=='*'){
                k++;
            }
        }
        return k;
    }
};