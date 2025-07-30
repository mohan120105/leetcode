class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> res(n, vector<int>(n, 0)); 
        int rs=0;
        int re = n-1;
        int cs = 0;
        int ce = n-1;
        int j=1;
        while(re>=rs && ce>=cs){

            for(int i=cs;i<=ce;i++){
                res[rs][i] = j;
                j++;
            }
            rs++;
            for(int row = rs;row<=re;row++){
                res[row][ce] = j;
                j++;
            }
            ce--;
            if(ce<cs)break;
            for(int c=ce;c>=cs;c--){
                res[re][c] = j;
                j++;
            }
            re--;
            if(re<rs){
                break;
            }
            for(int row = re;row>=rs;row--){
                res[row][cs] = j;
                j++;

            }
            cs++;

        }
        return res;
    }
};