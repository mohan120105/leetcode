class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // vector<int>v(2*n,0);
        int size = flowerbed.size();;
        for(int i=0;i<size&&n>0;i++){
            if(flowerbed[i]==0){
                int pre = (i==0)?0:flowerbed[i-1];
                int curr = (i==size-1)?0:flowerbed[i+1];
                if(pre==0 && curr==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        if(n==0){
            return true;
        }
        return false;
        
    }
};