int maxnum(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

class Solution {
public:
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
};