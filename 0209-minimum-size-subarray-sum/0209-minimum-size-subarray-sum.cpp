class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int ml=INT_MAX;
        int s=0;
        int st=0;
        // bool k=false;
        // if(s>=target)return 1;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            while(s>=target){
                l=i-st+1; 
                ml = min(ml,l);
                s-=nums[st];
                st++;
                // k=true;
                
            }
            
        }
        if(ml==INT_MAX)return 0;
        return ml;

    }
};


// int l=0,minlen=0,s=0,st=0;
// for(int i=0;i<n;i++){
//     s+=nums[i];
//     while(s>=target){
//         l = i-st+1;
        
//         s -=nums[st];
//         st++;
//         ml = min(l,ml);
//     }
// }