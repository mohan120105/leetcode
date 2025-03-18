class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>freq;
        int req=0;
        for(int i=0;i<nums.size();i++){
            req = target-nums[i];
            if(freq.find(req)!=freq.end()){
                return {i,freq[req]};
            }
            freq[nums[i]] = i;
        }
        return {};
    }
};