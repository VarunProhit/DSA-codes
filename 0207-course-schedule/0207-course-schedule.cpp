class Solution {

public:
bool canFinish(int n, vector<vector<int>>& pre)
{
 int i,j,p;
	    p=pre.size();
       vector<vector<int>> graph(n);
       vector<int> deg(n,0);
       for(auto c : pre)
       {
           graph[c[1]].push_back(c[0]);
           deg[c[0]]++;
       }
       int v=0;
       queue<int> q;
       for(i=0;i<n;i++)
       {
           if(deg[i]==0)
           q.push(i);
       }
       while(!q.empty())
       {
           int curr=q.front();
           q.pop();
           v++;
           for(auto it:graph[curr])
           {
               deg[it]--;
               if(deg[it]==0)
               q.push(it);
               
           }
       }
        
       if(v==n)
       return true;
       
       
        return false;
}
};