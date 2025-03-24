class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mx=abs(nums[0]);
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i]-0)<=mx){
                if(abs(nums[i]-0)==mx){
                    ans=max(ans,nums[i]);
                }
                else{                
                ans = nums[i];
                }
                mx = min(abs(nums[i]),mx);
            }
        }
        return ans;
    }
};