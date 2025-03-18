class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        vector<string>v(min(numRows,int(s.length())));
        int row = 0;
        bool goDown = false;
        for(char c:s){
            v[row]+=c;
            if(row==0||row==numRows-1){
                goDown = !goDown;
            }
            row+=goDown?1:-1;
        }
        string str="";
        for(auto ch:v){
            str+=ch;
        }
        return str;
    }
};