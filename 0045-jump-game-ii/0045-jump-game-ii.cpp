class Solution {
public:
    int jump(vector<int>& nums) {
        int max_s = 0;
        if(nums.size()==1)return 0;
        int c=1;
        for(int i=0;i<nums.size();i++){
            max_s = max(max_s,nums[i]+i);
            if(max_s<nums.size()-1){
                c++;
            }
            else{
                return c;
            }
        }
        return c;
    }
};