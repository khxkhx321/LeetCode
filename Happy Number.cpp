class Solution {
public:
    bool isHappy(int n) {
        map<int, int> solved;
        int temp = n;
        if(temp == 0)
        {
            return false;
        }
        
        
        while(true)
        {
            if(temp == 1)
            {
                return true;
            }
            if(temp == 0)
            {
                return false;
            }
            
            
            int data = 0;
            while(temp > 0)
            {
                data += (temp%10) * (temp%10);
                temp = (temp - temp%10)/10;
            }
            
            if(data == 1)
            {
                return true;
            }
            if(solved.find(data) != solved.end())
            {
               return false;
            }
            solved.insert(pair<int, int>(data, 1));
            temp = data;
            
        }
        return false;
        
        
    }
};