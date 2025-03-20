class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j,c=-1;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                c=i;
                break;
            }
        }
        if(c==-1)return reverse(nums.begin(),nums.end());
        else{
            j = -1;
            
            for(int i=n-1;i>c;i--){
            if(nums[i]>nums[c]){
                j=i;
                break;
            }
        }
        swap(nums[c],nums[j]);

        }
        return reverse(nums.begin()+c+1,nums.end());
    }
};