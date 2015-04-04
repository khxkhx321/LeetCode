//https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(int A[], int n) {
        int num[3] = {0, 0, 0};
        int i = 0;
        for(i=0; i<n; i++)
        {
            num[A[i]] += 1;
        }
        if(num[0] > 0)
        {
            for(i=0; i<num[0]; i++)
            {
                A[i] = 0;
            }
        }
        if(num[1] > 0)
        {
            for(i=num[0];i<num[0]+num[1];i++)
            {
                A[i] = 1;
            
            }
        }
        if(num[2] > 0)
        {
            for(i=num[0] + num[1]; i<n;i++)
            {
                A[i] = 2;
            }
        }
    }
};