class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n <= 1)
        {
            return n;
        }
        int pre = 0;
        int cur = 1;
        while(cur < n)
        {
            if( A[cur] != A[pre])
            {
                A[pre+1] = A[cur];

                pre++;
            }
            cur++;
        }
        return pre + 1;
        
    }
};