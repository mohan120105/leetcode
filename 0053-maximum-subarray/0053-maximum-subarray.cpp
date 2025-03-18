class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int su=0;
        int max_s=INT_MIN;
        for(int i=0;i<nums.size();i++){
            su += nums[i]; 
            max_s = max(max_s,su);
            if(su<0)su=0;
        }
        return max_s;
    }
};