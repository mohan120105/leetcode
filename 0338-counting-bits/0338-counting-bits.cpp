class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1, 0);
        for (size_t i = 1; i <= static_cast<size_t>(n); ++i) {
            res[i] = res[i >> 1] + (i & 1);
        }
        return res;
    }
};
