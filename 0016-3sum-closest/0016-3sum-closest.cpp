class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int j,k,s,diff;
        
        sort(nums.begin(),nums.end());
        int curr = nums[0]+nums[1]+nums[2];
        
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            j=i+1;
            k=n-1;
            while(j<k){
                s = nums[i]+nums[j]+nums[k];
                if(s==target)return s;
                if(abs(curr-target)>abs(s-target)){
                    curr = s;
                }
                else if(s>target)k--;
                else {
                    j++;
                }

            }
        }
        return curr;
        
    }
};