//https://leetcode.com/submissions/detail/24894886/

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    
    return b;
}

class Solution {
public:
    int maximalRectangle(vector<vector<char> > &matrix) {
        if(matrix.size() <= 0 || (matrix[0]).size() <= 0)
        {
            return 0;
        }
        
        int ** width = new int*[matrix.size()];
        int ** height = new int*[matrix.size()];
        
        
        for(int i=0; i<matrix.size(); i++)
        {
            width[i] = new int[matrix[i].size()];
            height[i] = new int[matrix[i].size()];
            for(int j = 0; j<matrix[i].size(); j++)
            {
                if(matrix[i][j] == '0')
                {
                    width[i][j] = 0;
                    height[i][j] = 0;
                }
                else
                {
                    width[i][j] = 1;
                    height[i][j] = 1; 
                }
            }
        }
        
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(j - 1 >= 0 && width[i][j] >= 1)
                {
                    width[i][j] = width[i][j-1] + 1;
                }
                if(i - 1 >= 0 && height[i][j] >= 1)
                {
                    height[i][j] = height[i-1][j] + 1;
                }
                
            }
        }
        
        int max_size = 0;
        
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j =0; j<matrix[i].size(); j++)
            {
                if(width[i][j] > 0 && height[i][j] > 0)
                {
                    int min_width = width[i][j];
                    int start = 0;
                    while(start < height[i][j])
                    {
                        min_width = min(min_width, width[i - start][j]);
                        
                        max_size = max(max_size, min_width * (start + 1)); 
                        
                        
                        start++;
                        
                    }
                }
            }
        }
        
        return max_size;
        
        
    }
};