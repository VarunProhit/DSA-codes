class Solution {
public:
    
    void bfs(vector<vector<bool>>& fl,int i,int j,int m,int n)
    {
        if(i>n-1 || j>m-1 || i<0 || j<0 || fl[i][j]==false)
            return;
        fl[i][j]=false;
        bfs(fl,i+1,j,m,n);
        bfs(fl,i-1,j,m,n);
        bfs(fl,i,j+1,m,n);
        bfs(fl,i,j-1,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int i,j, n=grid.size(),m=grid[0].size(),ans=0;
        vector<vector<bool>> fl;
        for(i=0;i<n;i++)
        {
            vector<bool> k(m);
for(j=0;j<m;j++)
{
    if(grid[i][j]=='1')
     k[j]=true;
    else k[j]=false;
}
        fl.push_back(k);}
        
        for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {     if(fl[i][j]==true)
        {
            ans++;
             bfs(fl,i,j,m,n);
         }
      
     }}
        return ans;
    }
};
