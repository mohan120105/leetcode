class Solution {
public:
    static bool compare(string a,string b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        for(int i:nums){
            vec.push_back(to_string(i));
        }
        sort(vec.begin(),vec.end(),compare);
        string res="";
        if(vec[0]=="0"){
            return "0";
        }
        for(int i=0;i<vec.size();i++){
            res+=vec[i];
        }
        return res;
    }
};