class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        int index = length -1;
        
        bool need_add = true;
        
        while(index >= 0)
        {
            if(!need_add)
            {
                break;
            }
            
            int num = digits[index] + 1;
            if(num >= 10)
            {
                need_add = true;
                digits[index] = 0;
            }
            else
            {
                need_add = false;
                digits[index] = num;
            }
            index --;
        }
        
        if(need_add)
        {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};