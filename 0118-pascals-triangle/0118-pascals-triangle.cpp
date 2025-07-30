class Solution {
public:
    long long comb(long n,long r){
        long mul = 1;
        r = min(r,n-r);
        long i=0;
        while(i!=r){
            mul *=n;
            n--;
            i++;
        }
        long div = 1;
        while(r>0){
            div *=r;
            r--;
        }
        long long ans = (long long)mul/div;
        return ans;
    } 
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        int n = numRows;
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<=i;j++){
                v.push_back(comb(i,j));
            }
            res.push_back(v);
        }
        return res;
    }
};