
class Solution {
public:
    int majorityElement(vector<int> &num) {
        if(num.size() <= 2)
        {
            return num[0];
        }
    
        int n = num.size();
        sort(num.begin(), num.end());

        return num[n/2];
    }
};