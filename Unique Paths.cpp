class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m <= 0 || n <= 0)
        {
            return 0;
        }
        
        int ** a = new int*[n+ 1];
        for(int i =0; i<= n; i++)
        {
            a[i] = new int[m+1];
            for(int j=0;j<=m;j++)
            {
                a[i][j] = 1;
            }
        }
        
        for(int i=2; i<= n; i++)
        {
            for(int j =2; j<= m; j++)
            {
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
            
        }
        return a[n][m];
    }
};