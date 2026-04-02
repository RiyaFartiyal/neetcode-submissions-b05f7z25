class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int max1=INT_MIN;
       for(int i=0;i<n;i++)
       {
            for(int j=i+1;j<n;j++)
            {
                if(prices[i]<prices[j])
                {
                    int profit=prices[j]-prices[i];
                    max1=max(max1,profit);
                }
               
            }
             
       } 
       if(max1==INT_MIN)
            return 0;
       return max1;
    }
};
