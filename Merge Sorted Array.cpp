class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        
        int * num = new int[m+n];
        int indexa = 0;
        int indexb = 0;
        
        int index = 0;
        while(indexa < m && indexb < n)
        {
            if(A[indexa] < B[indexb])
            {
                num[index] = A[indexa];
                
                indexa ++;
                index ++;
            }
            else
            {
                num[index] = B[indexb];
                indexb ++;
                index ++;
            }
        }
        
        while(indexa < m)
        {
           num[index] = A[indexa];
            indexa ++;
            index ++;
        }
        
        while(indexb < n)
        {
           num[index] = B[indexb];
            indexb ++;
            index ++;
        }
        
        for(int i=0; i<n+m; i++)
        {
            A[i] = num[i];
        }
        delete num;
    }
};