class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int mx = 0;
        for(int i:s){
            int curr=i;
            int streak = 1;
            if(s.find(i-1)==s.end()){
                while(s.find(curr+1)!=s.end()){
                    curr++;
                    streak++;
                }
            }
            mx = max(mx,streak);
        }
        return mx;
    }
};