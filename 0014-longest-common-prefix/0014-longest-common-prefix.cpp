class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_l= strs[0].length();
        for(int i=0;i<strs.size();i++){
            if(min_l<strs[i].length()){
                min_l = strs[i].length();
            }
        }
        string ans="";
        for(int i=0;i<min_l;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[j-1][i])return ans;
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};