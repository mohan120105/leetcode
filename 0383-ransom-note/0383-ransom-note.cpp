class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;
        
        // Count frequency of each character in magazine
        for (char c : magazine) {
            freq[c]++;
        }

        // Check if ransomNote can be constructed
        for (char c : ransomNote) {
            if (freq[c] == 0) {
                return false; // Not enough characters
            }
            freq[c]--; // Use one character
        }
        
        return true;
    }
};
