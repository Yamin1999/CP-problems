class Solution {
public:
    int maxProfit(vector<int>& prices) {

        
        int min_price=prices[0];
        int max_profit = 0;
        
        
        for(int i=0;i<prices.size();i++)
        {
            
            if(prices[i] < min_price)
            {
                min_price = prices[i];
            }
          
            int profit = prices[i] - min_price;
            
           // cout<<min_price<<ends<<max_profit<<endl;

            if(profit > max_profit)
            {
                max_profit = profit;
            }
                
                
        }
        
        
        return max_profit;
        
    }
};