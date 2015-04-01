class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t m = n & 1;
        int i = 1;
        while(i < 32)
        {
            n = n >> 1;
            m = m << 1;
            m += n & 1;
            ++i;
        }
        return m;
    }
};