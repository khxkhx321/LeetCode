//https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        
        if(s.size() <= 2)
        {
            return s;
        }
        
        int *first = new int[s.size() + 1];
        int *second = new int[s.size() + 1];
        int *cur = new int[s.size() + 1];
        for(int i=0; i<=s.size(); i++)
        {
            first[i] = 1;
            second[i] = 0;
            cur[i] = 0;
        }
        
        int max_index = 0;
        int max_len = 0;
        int cur_len = 0;
        
        
        for(int index = 0; index < s.size() - 1; index++)
        {
            if(s[index] == s[index+1])
            {
                second[index] = 2;
                
                cur_len = 2;
                if(max_len < cur_len)
                {
                    max_index = index;
                    max_len = cur_len;
                }
                
            }

        }
        
        for(int len = 3; len <= s.size(); len++)
        {
            for(int index = 0; index < s.size() - len + 1; index++)
            {
                
                if(s[index] == s[index + len -1] && first[index+1] == len-2)
                {
                    cur[index] = len;
                    
                    cur_len = len;
                    if(max_len < cur_len)
                    {
                        max_index = index;
                        max_len = cur_len;
                    }
                    
                }
            }
            
            int *temp = first;
            first = second;
            second = cur;
            cur = temp;
            

        }

        return s.substr(max_index, max_len);
        
        
        
    }
};