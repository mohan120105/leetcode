class Solution {
public:
    bool isPerfectSquare(int num) {
        int st=1,end=num;
        int mid;
        while(st<=end){
            mid = (st-end)/2+end;
            if(num/mid==mid){
                return true;
            }
            else if(num/mid<mid){
                end = mid-1;

            }
            else{
                st = mid+1;
            }
        }
        return false;
    }
};