class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c=1;
        int max_l=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                c++;
            }
            else{
                
                c=1;
            }
            max_l = max(max_l,c);
        }
        return max_l;
    }
};