class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        if(n == 0)
        {
            return 0;
        }
        int index = 0;
        for(int i=0; i<n; i++)
        {
            if(A[i] >= target)
            {
                return index;
            }
            index++;
        }
         return index;
    }
};