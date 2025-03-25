class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size(),1);
        vector<int>postfix(nums.size(),1);
        // prefix[0] = nums[0];
        // postfix[nums.size()-1]=nums[nums.size()-1];
        int r=1;
        for(int i=0;i<nums.size();i++){
            prefix[i] = r;
            r = nums[i]*r;
        }
        int rem=1;
        for(int j=nums.size()-1;j>=0;j--){
            prefix[j]=prefix[j]*rem;
            rem = rem*nums[j];
        }
        
        return prefix;

    }
};