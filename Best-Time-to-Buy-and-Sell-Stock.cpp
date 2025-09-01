class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices.size();
        int maxProfit = 0;
        int l = 0;
        int r = 1;
        while(r < s){
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                maxProfit = max(maxProfit, profit);
            } else{
                l = r;
            }
            ++r;
        }
        return maxProfit;
    }
};