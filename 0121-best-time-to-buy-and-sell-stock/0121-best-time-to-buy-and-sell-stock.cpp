class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p = 0;
        int curr_p = 0;
        int curr_pr = prices[0];
        int min_pr = prices[0];
        for(int i=1;i<prices.size();i++){
            curr_pr = prices[i];
            curr_p = curr_pr - min_pr;
            max_p = max(curr_p,max_p);
            min_pr = min(min_pr,curr_pr);
        }
        return max_p;
    }
};