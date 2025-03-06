class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,int>fr_r;
        unordered_map<int,int>fr_g;
        unordered_map<int,int>fr_b;
        int c=0;
        for(int i=0;i<rings.size();i=i+2){
            if(rings[i]=='R'){
                fr_r[rings[i+1]-'0']++;
            }
            else if(rings[i]=='G'){
                fr_g[rings[i+1]-'0']++;
            }
            else if(rings[i]=='B'){
                fr_b[rings[i+1]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            if(fr_r[i]>0 && fr_g[i]>0 && fr_b[i]>0){
                c++;
            }
        }
        return c;
    }
};