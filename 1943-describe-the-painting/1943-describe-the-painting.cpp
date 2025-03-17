class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<int,long>color;
        for(auto seg:segments){
            int st = seg[0],end = seg[1];
            long long co = seg[2];
            color[st]+=co;
            color[end]-=co;
        }

        vector<vector<long long>>res;
        long long mix=0;
        int prev=-1;
        for(auto[pos,co]:color){
            if(prev!=-1 && mix>0){
                res.push_back({prev,pos,mix});
            }
            prev = pos;
            mix += co;
        }
        return res;
    }
};