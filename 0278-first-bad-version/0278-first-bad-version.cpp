// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st=1,end=n;
        int mid;
        int ans;
        while(st<=end){
            mid = (st+end)/2;
            if(isBadVersion(mid)){
                end = mid-1;
                ans = mid;
            }
            else {
                st = mid+1;

            }
        }
        return ans;
    }
};