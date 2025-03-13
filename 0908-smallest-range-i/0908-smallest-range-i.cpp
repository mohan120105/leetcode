class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max_e = *max_element(nums.begin(),nums.end());
        int min_e = *min_element(nums.begin(),nums.end());
        return max(0,(max_e-k)-(min_e+k));
        
    }
};