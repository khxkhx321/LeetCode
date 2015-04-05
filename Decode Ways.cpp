int get_num(string s)
{
    if(s.size() == 0)
    {
        return 0;
    }
    else if(s.size() == 1)
    {
        if(s!="0")
        {
            return 1;
        }
        return 0;
    }
    else if(s.size() == 2)
    {
        if(s[0] == '1')
        {
            return 1;
        }
        else if(s[0] == '2')
        {
            if((int(s[1] - '6') <= 0 && int(s[1] - '0') >= 0))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
}

int get_total_num(string s)
{
    
    if(s.size() == 0)
    {
        return 0;
    }
    else if(s.size() == 1)
    {
        return get_num(s);
    }
    else if(s.size() == 2)
    {
        if(s[0] == '0')
        {
            return 0;
        }
        else if(s[0] == '1')
        {
            if(s[1] == '0')
            {
                return 1;
            }
            else
            {
                return 2;       
            }
        }
        else if(s[0] == '2')
        {
            if(s[1] == '0')
            {
                return 1;
            }
            else if(int(s[1] - '6') > 0)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
        else
        {
            if(s[1] == '0')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }

    }
    
}



class Solution {
public:
    int numDecodings(string s) {
        
        if(s.size() == 0)
        {
            return 0;
        }
        else if(s.size() == 1)
        {
            return get_num(s);
        }
        else if(s.size() == 2)
        {
            if(s[0] == '0')
            {
                return 0;
            }
            else if(s[0] == '1')
            {
                if(s[1] == '0')
                {
                    return 1;
                }
                else
                {
                    return 2;       
                }
            }
            else if(s[0] == '2')
            {
                if(s[1] == '0')
                {
                    return 1;
                }
                else if(int(s[1] - '6') > 0)
                {
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else
            {
                if(s[1] == '0')
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }

        }
        else
        {
            int **num = new int*[s.size() + 1];
            for(int i = 0; i<= s.size(); i++)
            {
                num[i] = new int[s.size()+ 1];
                for(int j=0;j<= s.size(); j++)
                {
                    num[i][j] = 0;
                }
            }
            
            for(int len =1; len<= s.size(); len++)
            {
                for(int index = 0; index < s.size(); index++)
                {
                    if(index + len > s.size())
                    {
                        continue;
                    }
                    if(len == 1)
                    {
                        num[len][index] = get_num(s.substr(index, len));
                    }
                    else if(len == 2)
                    {
                        num[len][index] = get_total_num(s.substr(index, len));
                        //num[len-1][index] * num[len-1][index + 1] + get_num(s.substr(index, len)); 
                    }
                    else
                    {
                        num[len][index] = num[1][index] * num[len-1][index+1] + get_num(s.substr(index, 2)) * num[len -2][index+2];
                    }
                }
            }
            
            return num[s.size()][0];
        }
    }
};