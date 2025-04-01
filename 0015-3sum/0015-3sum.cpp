class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        int target,k,j,s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            // target = -nums[i];
            j=i+1;
            k=n-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(j<k){
                s = nums[i]+nums[j]+nums[k]; 
                if(s ==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                }
                else if(s <0){
                    j++;
                }
                else{
                    k--;
                }

            }
        }
        return res;
    }
};

