class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x=0;
                if(grid[i][j]==1)
                {
                    sum=sum+4;
                    if(i!=0 && grid[i-1][j]==1)
                        x++;
                    if(j!=0 && grid[i][j-1]==1)
                        x++;
                    if(i!=n-1 && grid[i+1][j]==1)
                        x++;
                    if(j!=m-1 && grid[i][j+1]==1)
                        x++;
                }
                sum=sum-x;
            }
            
        }
        return sum;
    }
};