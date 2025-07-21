class Solution {
public:
    int reverse(int x) {
        int rev=0;
        bool flag = false;
        if(x<0){
            
            
            flag = true;
        }
        while(x!=0){
            int rem = x%10;
            if(rev>INT_MAX/10)return 0;
            rev = rev*10+rem;
            x = x/10;
        }
        if(flag){
            rev = max(-rev,INT_MIN);
            if(rev == INT_MIN){
                return 0;
            }
            return -rev;
        }
        else{
            rev = min(rev,INT_MAX);
            if(rev == INT_MAX){
                return 0;
            }
            return rev;
        }
    }
};