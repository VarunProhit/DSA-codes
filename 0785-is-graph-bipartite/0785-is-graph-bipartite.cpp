class Solution {
public:
    bool dfs(vector<vector<int>> &g,vector<int>&c,int i)
    {
       if(c[i]==-1)
       {
           c[i]=1;
       }
        for(auto x : g[i])
        {
            if(c[x]==-1)
            {
                c[x]=c[i]?0:1;
                if(dfs(g,c,x)==false)return false;
            }
            else if(c[x]==c[i])return false;
            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& g) {
        int i,j,n=g.size();
       vector<int> c(n,-1);
        for(i=0;i<n;i++)
        {
            if(c[i]==-1)
            {
                if(dfs(g,c,i)==false)
                    return false;
            }
        }
        return true;
    }
};