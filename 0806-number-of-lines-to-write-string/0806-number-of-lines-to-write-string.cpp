class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int>res;
        int c=0;
        int r=0;
        // for(char i:s){
        //     if(r>100){
        //         r=0;
        //         c++;
        //     }
        //     r+=widths[i-'a'];
        // }
        // while(s!=""){
        int i=0;
        while(i<s.length()){
            r+=widths[s[i]-'a'];
            if(r>100){
                r=r-widths[s[i]-'a'];
                c++;
                r=widths[s[i]-'a'];
            }
            i++;

        }
        
        res.push_back(c+1);
        res.push_back(r);
        return res;
    }
};