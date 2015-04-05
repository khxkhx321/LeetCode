int cmp(const void * it1, const void * it2)
{
    return *(int*)it1 - *(int*)it2;
}
class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        if(n ==0)
        {
            return 1;
        }
        
        qsort(A, n, sizeof(int), cmp);
        
        int i;
        for(i =0; i< n; i++)
        {
            if(A[i] >= 1)
            {
                break;
            }
        }
        
        if(i >= n)
        {
            return 1;
        }
        
        if(A[i] != 1)
        {
            return 1;
        }
        if(i == n-1)
        {
            return 2;
        }
        
        
        
        for(int j = i+1; j < n; j++)
        {
            if(A[j] - A[j-1] > 1)
            {
                return A[j-1] + 1;
            }
        }
        return A[n-1] + 1;
        
    }
};