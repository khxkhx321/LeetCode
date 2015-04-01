class Solution {
public:
    void rotate(int nums[], int n, int k) {
        k = k%n; 
        
        int start = 0;
        int end = n - 1 - k;
        while(start < end)
        {
            nums[start] = nums[start] ^ nums[end];
            nums[end] = nums[start] ^ nums[end];
            nums[start] = nums[start] ^ nums[end];
            ++start;
            --end;
        }
        start = n - k;
        end = n - 1;
        while(start < end)
        {
            nums[start] = nums[start] ^ nums[end];
            nums[end] = nums[start] ^ nums[end];
            nums[start] = nums[start] ^ nums[end];
            ++start;
            --end;
        }
        start = 0;
        end = n - 1;
        while(start < end)
        {
            nums[start] = nums[start] ^ nums[end];
            nums[end] = nums[start] ^ nums[end];
            nums[start] = nums[start] ^ nums[end];
            ++start;
            --end;
        }
    }
    
};