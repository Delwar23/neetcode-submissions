class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int curBuy = prices[0], profit = 0, i;

        for (i = 1; i < prices.size(); i++) {
            if (prices[i] < curBuy) {
                curBuy = prices[i];
            } else {
                profit = max(profit, prices[i] - curBuy);
            }
        }
        profit = max(profit, curBuy - prices[i - 1]);
        
        return profit;
    }
};
