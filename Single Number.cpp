class Solution {
public:
    int singleNumber(int A[], int n) {
        
        
        int data = 0;
        for(int i=0; i<n; i++)
        {
            data = A[i] ^ data;
        }
        return data;
    }
};