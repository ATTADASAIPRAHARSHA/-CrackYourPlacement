class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1,profit=0;
        for(int z=1;z<prices.size();z++)
        {
            if(prices[z-1]<prices[z])
            {
                profit+=(prices[z]-prices[z-1]);
            }
        }
        return profit;
    }
};
