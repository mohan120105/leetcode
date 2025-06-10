class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_v=nums[0],max_v=nums[0];
        int result = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(max_v,min_v);
            }
            max_v = max(nums[i],max_v*nums[i]);
            min_v = min(nums[i],min_v*nums[i]);
            result = max(result,max_v);
        }
        return result;
    }
};