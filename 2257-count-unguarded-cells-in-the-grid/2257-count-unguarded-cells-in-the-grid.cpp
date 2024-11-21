class Solution {
public:
    void ct(int m,int n, vector<vector<int>> &v, vector<vector<int>> &vis, int i,int j, int x,int y){
        if(i+x>=m || j+y>=n || i+x<0 || j+y<0 || v[i+x][j+y]==-1 || v[i+x][j+y]==1)
            return;
        
         i = i+x;
         j = j+y;  
        // if(v[i][j]==1 && vis[i][j]!=1)
        //         {
        //             vis[i][j]=1;
        //             ct(m,n,v,vis,i,j,1,0);
        //             ct(m,n,v,vis,i,j,0,1);
        //             ct(m,n,v,vis,i,j,-1,0);
        //             ct(m,n,v,vis,i,j,0,-1);
        //         }
        // if(vis[i][j]==1)
        //     return;
        vis[i][j]=1;
        ct(m,n,v,vis,i,j,x,y);
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        
        vector<vector<int>> v(m,vector<int>(n,0));
        vector<vector<int>> vis(m,vector<int>(n,0));
        int cnt=0;
        for(auto x:guards){
            v[x[0]][x[1]]=1;
        }
        for(auto x:walls){
            v[x[0]][x[1]]=-1;
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1 && vis[i][j]!=1)
                {
                    vis[i][j]=1;
                    ct(m,n,v,vis,i,j,1,0);
                    ct(m,n,v,vis,i,j,0,1);
                    ct(m,n,v,vis,i,j,-1,0);
                    ct(m,n,v,vis,i,j,0,-1);
                }
            }
        }
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<vis[i][j]<<" ";
                if(vis[i][j]==0 && v[i][j]!=-1)
                    cnt++;
            }
             cout<<endl;
        }
        return cnt;
    }
};