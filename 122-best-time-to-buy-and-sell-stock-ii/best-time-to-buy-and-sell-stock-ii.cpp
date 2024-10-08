class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<prices[i-1]){
                buy = prices[i];
                continue;
            }
            profit = profit + prices[i] - buy;
            buy = prices[i];
            
        }
        return profit;
    }
};