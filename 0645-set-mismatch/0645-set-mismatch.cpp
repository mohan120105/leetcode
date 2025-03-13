class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        unordered_map<int,int>freq;
        vector<int>v;
        int s=0;
        for(int i:nums){
            freq[i]++;
            s+=i;
        }
        for(auto i:freq){
            if(i.second==2){
                v.push_back(i.first);
                break;
            }
        }
        s=s-v[0];
        int n = nums.size();
        int su = n*(n+1)/2;
        int k=su-s;
        v.push_back(k);
        return v;
        
    }
};