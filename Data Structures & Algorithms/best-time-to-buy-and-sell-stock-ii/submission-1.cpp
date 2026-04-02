class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int p=1;p<prices.size();p++)
        {
            if(prices[p-1]<prices[p])
            {
                profit+=prices[p]-prices[p-1];
            }
          
        }
        return profit;
    }
};