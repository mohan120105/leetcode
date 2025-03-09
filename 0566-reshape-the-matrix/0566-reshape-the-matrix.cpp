class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        if(row==r && col==c)return mat;
        if(r*c!=col*row){
            return mat;
        }
        vector<int>v;
        for(auto i:mat){
            for(int j:i){
                v.push_back(j);
            }
        }
        vector<vector<int>>res;
        
        int k=0;
        for(int i=0;i<r;i++){
            vector<int>an;
            for(int j=0;j<c;j++){
                an.push_back(v[k]);
                k++;
            }
            res.push_back(an);
        }
        return res;
    }
};