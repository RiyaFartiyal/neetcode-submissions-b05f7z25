class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int mincost=prices[0];
        for(int ni:prices)
        {
            int profit=ni-mincost;
            maxP=max(maxP,profit);
            mincost=min(ni,mincost);
        }
        return maxP;
    }
};
