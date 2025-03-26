class Solution {
public:
    int maxNumberOfBalloons(string text) {
       unordered_map<char,int>freq;
       int count=0;
       for(char c:text){
        
            freq[c]++;
        
       }
       return min({freq['b'], freq['a'], freq['l'] / 2, freq['o'] / 2, freq['n']}); 

    }
};