class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>cand(ratings.size(),1);
        int n = ratings.size();
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                cand[i] = cand[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                cand[i] = max(cand[i],cand[i+1]+1);
            }
            
        }
        int s=0;
        for(int i:cand){
            s+=i;
        }
        return s;
    }
};