class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int su=0;
        // int max_s=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     su += nums[i]; 
        //     max_s = max(max_s,su);
        //     if(su<0)su=0;
        // }
        // return max_s;
        int maxs = nums[0];
        int curr = nums[0];
        for(int i=1;i<nums.size();i++){
            curr = max(curr+nums[i],nums[i]);
            
            maxs = max(maxs,curr);
            if(curr<0){
                curr = 0;
            }
        }
        return maxs;
    }
};