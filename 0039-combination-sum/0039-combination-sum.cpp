class Solution {
public:
    void backtrack(vector<vector<int>>&res,vector<int>&curr,vector<int>candidates,int target,int idx){
        if(target==0){
            res.push_back(curr);
        }
        for(int i=idx;i<candidates.size();i++){
            if(candidates[i]>target)continue;
            curr.push_back(candidates[i]);
            backtrack(res,curr,candidates,target-candidates[i],i);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>v;
        backtrack(res,v,candidates,target,0);
        return res;
    }
};