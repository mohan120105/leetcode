class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> result;
        int n = s.length();

        for (int i = 0; i < n; i += k) {
            // Extract substring of length k or remaining characters
            string group = s.substr(i, k);

            // If the group is shorter than k, append fill characters
            while (group.length() < k) {
                group += fill;
            }

            result.push_back(group);
        }
        
        return result;
    }
};
