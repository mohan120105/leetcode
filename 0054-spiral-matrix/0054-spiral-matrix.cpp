class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size()*matrix[0].size();
        int row = matrix.size();
        int col = matrix[0].size();
        int rs = 0;
        int re = row-1;
        int cs = 0;
        int ce = col-1;
        vector<int>v;
        while(rs<=re &&cs<=ce){
            for(int c=cs;c<=ce;c++){
                v.push_back(matrix[rs][c]);
                n--;
                
            }
            rs++;
            for(int r=rs;r<=re;r++){
                v.push_back(matrix[r][ce]);
                
                n--;
            }
            ce--;
            if(rs<=re){
            for(int c=ce;c>=cs;c--){
                v.push_back(matrix[re][c]);
                n--;

            }
            re--;
            }
            if(cs<=ce){
            for(int r=re;r>=rs;r--){
                v.push_back(matrix[r][cs]);
                n--;
            }
            cs++;
        }
        }
        return v;
    }
};