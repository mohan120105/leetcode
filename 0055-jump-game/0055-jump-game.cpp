class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_s=0;
        for(int i=0;i<nums.size();i++){
            if(i>max_s){
                return false;
            }
            max_s = max(max_s,i+nums[i]);
        }
        return true;
    }
};