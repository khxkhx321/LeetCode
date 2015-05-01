class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index = -1;
        int peak = 0x80000000;
        int n = nums.size();
        if(n == 1)
        {
            return 0;
        }
        if(nums[0] > nums[1])
        {
            peak = nums[0];
            index = 0;
        }
        if(nums[n-1] > nums[n-2] && peak < nums[n-1])
        {
            peak = nums[n-1];
            index = n-1;
            
        }
        
        
        for(int i= 1; i< n - 1; i++)
        {
            if(nums[i] > nums[i-1] && nums[i] >nums[i+1] && nums[i] > peak)
            {
                peak = nums[i];
                index = i;
            }
        }
        return index;
    }
};