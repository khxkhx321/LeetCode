class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 0)
        {
            return 0;
        }
        
        int profit = 0;
        for(auto it = prices.begin() + 1; it != prices.end(); it++)
        {
            if(*it - *(it-1) > 0)
            {
                profit += *it - *(it-1);
            }
        }
        return profit;
    }
};