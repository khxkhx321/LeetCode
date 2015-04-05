//https://leetcode.com/problems/anagrams/

int comp(const void*a,const void*b)
{
return *(const char*)a-*(const char*)b;
}


class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        vector<string> v;
        map<string, int> num_map;
        map<string, string> str_map;
        for(vector<string>::iterator it = strs.begin(); it<strs.end(); it++)
        {
            string key = *it;
            
            int size = (*it).size();
            qsort(&key[0], size, sizeof(char), comp);
            string str = key;
            if(num_map.find(str) != num_map.end())
            {
                if(num_map[str] == 1)
                {
                    v.push_back(str_map[str]);
                    
                }
                v.push_back(*it);
                num_map[str] = num_map[str] + 1;
            }
            else
            {
                num_map.insert(make_pair(str, 1));
                str_map.insert(make_pair(str, *it));
            }
            
        }
        return v;
    }
};