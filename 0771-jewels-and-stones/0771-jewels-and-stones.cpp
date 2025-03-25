class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>freq;
        for(char c:stones){
            freq[c]++;
        }
        int count=0;
        for(char c:jewels){
            count+=freq[c];
        }
        return count;
    }
};