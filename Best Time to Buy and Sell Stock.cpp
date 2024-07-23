class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int buy=0,sell;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[buy])
            {
                maxprofit=max(maxprofit,(prices[i]-prices[buy]));
            }
            else{
                buy=i;
            }
        }
        return maxprofit;
    }
};
