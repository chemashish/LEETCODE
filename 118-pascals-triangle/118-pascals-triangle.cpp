class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i=0;i<numRows;i++)
        {
            vector<int>v;
            int k=0;
            for(int j=0;j<=i;j++)
            {
                
                if(i==0 || i==1)
                {
                    v.push_back(1);
                }
                
                else{
                    
                    if(j==0 || j==i)
                    {
                        v.push_back(1);
                    }
                    else{
                        int a=pascal[i-1][k]+pascal[i-1][k+1];
                        v.push_back(a);
                        k++;
                    }
                    
                    
                }
            }
            pascal.push_back(v);
            
            
        }
        return pascal;
    }
};