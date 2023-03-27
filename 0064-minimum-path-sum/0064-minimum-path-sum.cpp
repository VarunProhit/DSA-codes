class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
        vector<int> curr(n+1), prev(n+1, INT_MAX);
        prev[1] = 0;
        curr[0] = INT_MAX;
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <= n; ++j){
                curr[j] = min(curr[j-1], prev[j]) + grid[i-1][j-1];
            }
            prev = curr;
        }
        return curr[n];
    }
};