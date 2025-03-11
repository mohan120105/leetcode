class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int col = n,row = m;
        int k=ops.size();
        for(int i=0;i<k;i++){
            int l=ops[i][0];
            int r = ops[i][1];
            col = min(col,r);
            row = min(row,l);
        }
        return row*col;
    }
};