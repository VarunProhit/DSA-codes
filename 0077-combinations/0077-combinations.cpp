class Solution {
public:
   vector<vector<int>> combine(int n, int k) 
{
    vector<vector<int>> result;
    vector<int> solution;
    dfs(result, solution, n, k, 1);
    
    return result;
}

void dfs(vector<vector<int>>& result, vector<int>& solution, int n, int k, int start)
{
    if (solution.size() == k)
    {
        result.push_back(solution);
        return;
    }
    
    for (int i = start; i <= n; i++)
    {
        solution.push_back(i);
        dfs(result, solution, n, k, i + 1);
        solution.pop_back();
    }
}
};