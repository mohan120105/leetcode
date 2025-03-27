class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(auto i:board){
            unordered_map<char,int>freq;
            for(auto k:i){
            freq[k]++;
            if(k!='.' && freq[k]>1){
                return false;
            }
            }
        }
        for(int j=0;j<board[0].size();j++){
            unordered_map<char,int>freq;
            for(int i=0;i<board.size();i++){
                freq[board[i][j]]++;
                if(board[i][j]!='.' && freq[board[i][j]]>1){
                    return false;
                }
            }
        }
        for(int i=0;i<9;i=i+3){
            for(int j=0;j<9;j=j+3){
                if(!isvalid(i,j,board))return false;
            }
        }
        return true;

    }
    bool isvalid(int i,int j,vector<vector<char>>&board){

        unordered_map<char,int>freq;
        for(int r=i;r<i+3;r++){
            for(int c=j;c<j+3;c++){
                freq[board[r][c]]++;
                if(board[r][c]!='.' && freq[board[r][c]]>1){
                    return false;
            }
        }
        }
        return true;
    
    }
};