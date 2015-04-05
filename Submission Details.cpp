class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        
        int elem_num = 0;
        
        for(int i=0; i<n; ++i)
        {
            if(A[i] != elem)
            {
                if(elem_num != 0)
                {
                    A[i - elem_num] = A[i];
                    
                }
            }
            else
            {
                ++elem_num;
            }
            
        }
        return n - elem_num;
    }
};