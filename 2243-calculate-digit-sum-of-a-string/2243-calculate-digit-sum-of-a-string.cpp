class Solution {
public:
    string digitSum(string s, int k) {

        while(s.length()>k){
            string str = s;
            s="";
            int a = str.length();
            for(int i=0;i<a;i=i+k){
                string l = str.substr(i,k);
                s+=digitsum(l);
                
            }
        }
        return s;
        
    }
    string digitsum(string s){
        int c=0;
        for(int i=0;i<s.length();i++){
            
            c+=s[i]-'0';
        }
        return to_string(c);
    }
};