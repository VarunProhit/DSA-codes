class Solution
{
    public:
        int uniquePathsWithObstacles(vector<vector < int>> &o)
        {
            int n, m, i, j, k;
            n = o.size();
            m = o[0].size();
            int dp[n][m];
            if (o[0][0] == 0)
                dp[0][0] = 1;
            else dp[0][0] = 0;
            for (i = 1; i < m; i++)
            {
                if (o[0][i] != 1) dp[0][i] = dp[0][i - 1];
                else dp[0][i] = 0;
            }
            for (i = 1; i < n; i++)
            {
                if (o[i][0] != 1) dp[i][0] = dp[i - 1][0];
                else dp[i][0] = 0;
            }
            for (i = 1; i < n; i++)
            {
                for (j = 1; j < m; j++)
                {
                    if (o[i][j] == 1)
                        dp[i][j] = 0;
                    else
                    {
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                    }
                }
            }
            return dp[n - 1][m - 1];
        }
};