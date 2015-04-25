int maxnum(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        
        int max = nums[0];
        int curmax = nums[0];
        for(vector<int>::iterator it=nums.begin() + 1; it!= nums.end(); it++)
        {
            
            
            curmax = maxnum(*it, curmax + *it);
            
            if(curmax > max)
            {
                max = curmax;
            }
            
        }
        return max;
    }


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
        {
            return 0;
        }
        vector<int> profit;
        for(vector<int>::iterator it = prices.begin() + 1; it != prices.end(); it ++)
        {
            profit.push_back( *it - *(it-1) );
        }
        
        int data = maxSubArray(profit);
        
        return data > 0?data:0 ;
        
        
    }
};