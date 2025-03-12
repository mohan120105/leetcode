class Solution {
public:
    string largestGoodInteger(string num) {
        string s="";
        for(int i=9;i>=0;i--){
            s = to_string(i)+to_string(i)+to_string(i);
            if(num.find(s)!=string::npos){
                return s;
            }
        }
        return "";
    }
};