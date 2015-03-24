class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num = 0;
        uint32_t i = 1;
        int index = 0;
        while(n > 0)
        {
            if((n & i) > 0)
            {
                num ++;
            }
            n = n >> 1;
        }
        return num;
    }
};