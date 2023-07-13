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
bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
{
int edges = prerequisites.size();
vector<edge*> graph[numCourses];

    for(int i = 0;i<edges;i++)
    {
        int x = prerequisites[i][0];
        int y = prerequisites[i][1];
        
        graph[x].push_back(new edge(x,y));
    }
    vector<bool> visited(numCourses,false);
    vector<bool> dfsvisited(numCourses,false);

    for(int i = 0;i<numCourses;i++)
    {
        if(visited[i]==false)
        {
            bool ans = isCycle(i, graph,visited, dfsvisited);
            if(ans) return false;
        }
    }
    
    return true;
}
};