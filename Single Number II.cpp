bool complare(int a,int b)
{
 return a>b;
}
class Solution {
public:
    int singleNumber(int A[], int n) {
        if(n <= 2)
        {
            return A[0];
        }
        
        sort(A, A+n, complare);
        
        
        for(int i=0; i< n; i=i+3)
        {
            if(i+1 >= n)
            {
                return A[i];
            }
            if(i+2 >= n)
            {
                return A[i];
            }
            if(A[i] != A[i+1] || A[i] != A[i+2])
            {
                return A[i];
            }
        }
    }
};