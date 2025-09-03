class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> mCoins(amount + 1, amount + 1);
        mCoins[0] = 0;
        
        for(int i = 1; i <= amount; ++i){
            for(int j = 0; j < coins.size(); ++j){
                if( i - coins[j] >= 0 ){
                    mCoins[i] = min(mCoins[i], 1 + mCoins[i - coins[j]]);
                }
            }
        }
        
        return mCoins[amount] != amount + 1 ? mCoins[amount] : -1;
    }
};