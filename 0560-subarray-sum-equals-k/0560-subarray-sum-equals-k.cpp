class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        freq[0]=1;
        int c=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(freq.find(s-k)!=freq.end()){
                c+=freq[s-k];
                
            }
            freq[s]++;
        }
        return c;
    }
};