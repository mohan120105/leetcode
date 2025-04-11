class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int result,mid;
        while(low<high){
            mid = low+(high-low)/2;
            if(hours(mid,piles,h)){
                
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    bool hours(int k,vector<int>&piles,int h){
        int hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k; // same as ceil(pile / k)
        }
        return hours <= h;
    }
};