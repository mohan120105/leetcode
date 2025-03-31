class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagram;
        for(string str:strs){
            string sorted = str;
            sort(sorted.begin(),sorted.end());
            anagram[sorted].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto i:anagram){
            ans.push_back(i.second);
        }
        return ans;
    }
};