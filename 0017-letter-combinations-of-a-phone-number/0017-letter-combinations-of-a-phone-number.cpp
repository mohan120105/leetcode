class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return {};

        vector<string>phone2str={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string curr="";
        vector<string>result;
        // int index  = 0;
        backtrack(0,curr,phone2str,result,digits);
        return result;
    }
    void backtrack(int index,string &curr,vector<string>&phone2str,vector<string>&result,string &digits){
        if(index == digits.length()){
            result.push_back(curr);
            return;
        }
        string letters = phone2str[digits[index]-'0'];
        for(char letter:letters){
        
        curr.push_back(letter);
        backtrack(index+1,curr,phone2str,result,digits);
        curr.pop_back();

        }

    }
};