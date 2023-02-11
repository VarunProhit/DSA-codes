class Solution
{
    public:
        bool fl = false;
    void dfs(vector<vector < int>> &v, int s, int d, vector< bool > &vis)
    {
        if (vis[s] == true) return;
        vis[s] = true;
        if (fl) return;
        if (s == d)
        {
            fl = true;
            return;
        }
        for (int i = 0; i < v[s].size(); i++)
        {
            dfs(v, v[s][i], d, vis);
            if (fl) return;
        }
    }
    bool validPath(int n, vector<vector < int>> &edges, int source, int destination)
    {
        vector<vector < int>> v(n);
        int i, j;
        if (source == destination)
        {
            return true;
        }
        for (i = 0; i < edges.size(); i++)
        {
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n, 0);
        for (i = 0; i < v[source].size(); i++)
        {
            vis[source] = true;
            dfs(v, v[source][i], destination, vis);
            if (fl) break;
        }
        return fl;
    }
};