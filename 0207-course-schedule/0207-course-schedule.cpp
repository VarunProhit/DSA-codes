class Solution {
private:
class edge
{
public:
int sr;
int ds;
edge(int sr, int ds)
{
this->sr = sr;
this->ds = ds;
}
};
bool isCycle(int src, vector<edge*> graph[],vector<bool> &visited,vector<bool> &dfsvisited){

    visited[src] = true;
   dfsvisited[src] = true;
   
   for(auto x: graph[src])
   {
       if(visited[x->ds]==false)
       {
           bool ans = isCycle(x->ds, graph, visited,dfsvisited);
           if(ans) return true;
       }
       else 
       {
           if(dfsvisited[x->ds]==true)
                return true;
       }
   }
   dfsvisited[src] = false;
   return false;
}
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
       vector<int> v;
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
           v.push_back(curr);
           for(auto it:graph[curr])
           {
               deg[it]--;
               if(deg[it]==0)
               q.push(it);
               
           }
       }
        
       if(v.size()==n)
       return true;
       
       v.clear();
        return false;
}
};