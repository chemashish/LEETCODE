class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal;
        vector<int>Row;
        for(int i=0;i<=rowIndex;i++)
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
            if(i==rowIndex)
            {
                Row=v;
            }
            pascal.push_back(v);
            
            
        }
        return Row;
    }
};