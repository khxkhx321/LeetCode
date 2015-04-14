class Solution {
    
int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int getMax(vector<int> &num)
{
    int max_with = 0;
    int max_not_with = 0;
    int index = 0;
    int cur_max = 0;
    for(vector<int>::iterator it= num.begin(); it != num.end(); it ++)
    { 
        if(index == 0)
        {
            max_with = num[0];
            max_not_with = 0;
            cur_max = num[0];
        }
        else
        {
            int curnum = num[index] + max_not_with;
            if(curnum > max_with)
            {
                cur_max = max(curnum, cur_max);
                max_not_with = max(max_with, max_not_with);
                max_with = curnum;
            }
            else
            {
                cur_max = max(max_with, cur_max);
                max_not_with = max(max_not_with, max_with);
                max_with = curnum;
            }
            
        }
        index++;
        
    }

    return cur_max;
    
}
    
    
public:
    int rob(vector<int> &num) {
        if(num.size() == 0)
        {
            return 0;
        }
        return getMax(num);
        
    }
};