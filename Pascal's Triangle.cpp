class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        
        vector<vector<int>  > v;
        if(numRows == 0)
        {
            return v;
        }
        else{
            vector<int> tempdata;
            tempdata.push_back(1);
            v.push_back(tempdata);
            if(numRows == 1)
            {
            
                return v;
            }
            else
            {
                tempdata.push_back(1);
                v.push_back(tempdata);
                if(numRows == 2)
                {
                    return v;
                }
                
                for(int i =3; i<= numRows; i++)
                {
                    vector<int> data = v.back();
                    vector<int> temp;
                    temp.push_back(1);
                    for(int j=1; j<data.size(); j++)
                    {
                        temp.push_back(data[j] +data[j-1]);
                    }
                    temp.push_back(1);
                    v.push_back(temp);
                }
            }
        }
        return v;
    }
};